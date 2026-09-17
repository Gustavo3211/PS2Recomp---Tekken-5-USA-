#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036AFD8
// Address: 0x36afd8 - 0x36b050
void sub_0036AFD8_0x36afd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036AFD8_0x36afd8");
#endif

    switch (ctx->pc) {
        case 0x36b00cu: goto label_36b00c;
        default: break;
    }

    ctx->pc = 0x36afd8u;

    // 0x36afd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36afd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36afdc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36afe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36afe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36afe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36afe8: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36afec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36afecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36aff0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36aff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36aff4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36aff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36aff8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36aff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36affc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36affcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b000: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36b000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36b004: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36B004u;
    SET_GPR_U32(ctx, 31, 0x36B00Cu);
    ctx->pc = 0x36B008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B004u;
    // 0x36b008: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36B004u, 0x36B00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B00Cu;
label_36b00c:
    // 0x36b00c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36b00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36b010: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36b010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36b014: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36b018: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36B018u;
    {
        const bool branch_taken_0x36b018 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36B01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B018u;
        // 0x36b01c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36b018) {
            ctx->pc = 0x36B038u;
            goto label_36b038;
        }
    }
    ctx->pc = 0x36B020u;
    // 0x36b020: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b020u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b024: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b028: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b02c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36B02Cu;
    ctx->pc = 0x36B030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B02Cu;
    // 0x36b030: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36B034u;
    // 0x36b034: 0x0  nop
    ctx->pc = 0x36b034u;
    // NOP
label_36b038:
    // 0x36b038: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36b038u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b03c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36b03cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36b040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36b040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36b044: 0x3e00008  jr          $ra
    ctx->pc = 0x36B044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B044u;
        // 0x36b048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B04Cu;
    // 0x36b04c: 0x0  nop
    ctx->pc = 0x36b04cu;
    // NOP
    ctx->pc = 0x36b050u;
}
