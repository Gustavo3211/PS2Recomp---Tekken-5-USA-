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

// Function: sub_00130910
// Address: 0x130910 - 0x130978
void sub_00130910_0x130910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130910_0x130910");
#endif

    switch (ctx->pc) {
        case 0x130940u: goto label_130940;
        default: break;
    }

    ctx->pc = 0x130910u;

    // 0x130910: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130914: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x130914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x130918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13091c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13091cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130920: 0x24424cb0  addiu       $v0, $v0, 0x4CB0
    ctx->pc = 0x130920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19632));
    // 0x130924: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130928: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x130928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13092c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13092cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130930: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x130930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x130934: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x130934u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x130938: 0xc0493a2  jal         func_124E88
    ctx->pc = 0x130938u;
    SET_GPR_U32(ctx, 31, 0x130940u);
    ctx->pc = 0x13093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130938u;
    // 0x13093c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E88u, 0x130938u, 0x130940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130940u;
label_130940:
    // 0x130940: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130940u;
    {
        const bool branch_taken_0x130940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130940u;
        // 0x130944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130940) {
            ctx->pc = 0x130960u;
            goto label_130960;
        }
    }
    ctx->pc = 0x130948u;
    // 0x130948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13094c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13094cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130950: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130954: 0x8049a7a  j           func_1269E8
    ctx->pc = 0x130954u;
    ctx->pc = 0x130958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130954u;
    // 0x130958: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E8u;
    sub_001269E8_0x1269e8(rdram, ctx, runtime); return;
    ctx->pc = 0x13095Cu;
    // 0x13095c: 0x0  nop
    ctx->pc = 0x13095cu;
    // NOP
label_130960:
    // 0x130960: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130960u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130964: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130964u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130968: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13096c: 0x3e00008  jr          $ra
    ctx->pc = 0x13096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13096Cu;
        // 0x130970: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13096Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130974u;
    // 0x130974: 0x0  nop
    ctx->pc = 0x130974u;
    // NOP
    ctx->pc = 0x130978u;
}
