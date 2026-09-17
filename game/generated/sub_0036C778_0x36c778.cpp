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

// Function: sub_0036C778
// Address: 0x36c778 - 0x36c7f0
void sub_0036C778_0x36c778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036C778_0x36c778");
#endif

    switch (ctx->pc) {
        case 0x36c7acu: goto label_36c7ac;
        default: break;
    }

    ctx->pc = 0x36c778u;

    // 0x36c778: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36c778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x36c77c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c780: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36c780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36c784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36c784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c788: 0x2442e330  addiu       $v0, $v0, -0x1CD0
    ctx->pc = 0x36c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959920));
    // 0x36c78c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36c78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x36c790: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36c790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x36c794: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x36c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x36c798: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x36c798u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x36c79c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36c79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36c7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36c7a4: 0xc0a9e40  jal         func_2A7900
    ctx->pc = 0x36C7A4u;
    SET_GPR_U32(ctx, 31, 0x36C7ACu);
    ctx->pc = 0x36C7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7A4u;
    // 0x36c7a8: 0x32310001  andi        $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7900u, 0x36C7A4u, 0x36C7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36C7ACu;
label_36c7ac:
    // 0x36c7ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36c7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36c7b0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x36c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x36c7b4: 0x2442d620  addiu       $v0, $v0, -0x29E0
    ctx->pc = 0x36c7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956576));
    // 0x36c7b8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x36C7B8u;
    {
        const bool branch_taken_0x36c7b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C7B8u;
        // 0x36c7bc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36c7b8) {
            ctx->pc = 0x36C7D8u;
            goto label_36c7d8;
        }
    }
    ctx->pc = 0x36C7C0u;
    // 0x36c7c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c7c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c7c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c7c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c7cc: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x36C7CCu;
    ctx->pc = 0x36C7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36C7CCu;
    // 0x36c7d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x36C7D4u;
    // 0x36c7d4: 0x0  nop
    ctx->pc = 0x36c7d4u;
    // NOP
label_36c7d8:
    // 0x36c7d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36c7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36c7dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x36c7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36c7e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36c7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36c7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x36C7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36C7E4u;
        // 0x36c7e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36C7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36C7ECu;
    // 0x36c7ec: 0x0  nop
    ctx->pc = 0x36c7ecu;
    // NOP
    ctx->pc = 0x36c7f0u;
}
