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

// Function: sub_003728B8
// Address: 0x3728b8 - 0x372930
void sub_003728B8_0x3728b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003728B8_0x3728b8");
#endif

    switch (ctx->pc) {
        case 0x3728ecu: goto label_3728ec;
        default: break;
    }

    ctx->pc = 0x3728b8u;

    // 0x3728b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3728b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3728bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3728bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3728c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3728c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3728c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3728c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3728c8: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x3728c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x3728cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3728ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3728d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3728d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3728d4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x3728d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x3728d8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3728d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3728dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3728dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3728e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3728e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3728e4: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x3728E4u;
    SET_GPR_U32(ctx, 31, 0x3728ECu);
    ctx->pc = 0x3728E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3728E4u;
    // 0x3728e8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x3728E4u, 0x3728ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3728ECu;
label_3728ec:
    // 0x3728ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3728ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3728f0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3728f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3728f4: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x3728f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x3728f8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3728F8u;
    {
        const bool branch_taken_0x3728f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3728FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3728F8u;
        // 0x3728fc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3728f8) {
            ctx->pc = 0x372918u;
            goto label_372918;
        }
    }
    ctx->pc = 0x372900u;
    // 0x372900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x372904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x372904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372908: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37290c: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x37290Cu;
    ctx->pc = 0x372910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37290Cu;
    // 0x372910: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x372914u;
    // 0x372914: 0x0  nop
    ctx->pc = 0x372914u;
    // NOP
label_372918:
    // 0x372918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x372918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37291c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x37291cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x372920: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x372920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x372924: 0x3e00008  jr          $ra
    ctx->pc = 0x372924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x372928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x372924u;
        // 0x372928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x372924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37292Cu;
    // 0x37292c: 0x0  nop
    ctx->pc = 0x37292cu;
    // NOP
    ctx->pc = 0x372930u;
}
