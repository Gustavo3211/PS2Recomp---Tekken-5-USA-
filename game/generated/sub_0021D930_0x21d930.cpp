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

// Function: sub_0021D930
// Address: 0x21d930 - 0x21d9a0
void sub_0021D930_0x21d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D930_0x21d930");
#endif

    switch (ctx->pc) {
        case 0x21d948u: goto label_21d948;
        case 0x21d954u: goto label_21d954;
        case 0x21d970u: goto label_21d970;
        case 0x21d988u: goto label_21d988;
        default: break;
    }

    ctx->pc = 0x21d930u;

    // 0x21d930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d934: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21d934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21d938: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21d938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21d93c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21d93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21d940: 0xc086418  jal         func_219060
    ctx->pc = 0x21D940u;
    SET_GPR_U32(ctx, 31, 0x21D948u);
    ctx->pc = 0x21D944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D940u;
    // 0x21d944: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219060u, 0x21D940u, 0x21D948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D948u;
label_21d948:
    // 0x21d948: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21d948u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d94c: 0xc086418  jal         func_219060
    ctx->pc = 0x21D94Cu;
    SET_GPR_U32(ctx, 31, 0x21D954u);
    ctx->pc = 0x21D950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D94Cu;
    // 0x21d950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219060u, 0x21D94Cu, 0x21D954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D954u;
label_21d954:
    // 0x21d954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d958: 0x2e10001e  sltiu       $s0, $s0, 0x1E
    ctx->pc = 0x21d958u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x21d95c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21d95cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d960: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D960u;
    {
        const bool branch_taken_0x21d960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D960u;
        // 0x21d964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d960) {
            ctx->pc = 0x21D970u;
            goto label_21d970;
        }
    }
    ctx->pc = 0x21D968u;
    // 0x21d968: 0xc08763a  jal         func_21D8E8
    ctx->pc = 0x21D968u;
    SET_GPR_U32(ctx, 31, 0x21D970u);
    ctx->pc = 0x21D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D8E8u, 0x21D968u, 0x21D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D970u;
label_21d970:
    // 0x21d970: 0x2e22001e  sltiu       $v0, $s1, 0x1E
    ctx->pc = 0x21d970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x21d974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D974u;
    {
        const bool branch_taken_0x21d974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D974u;
        // 0x21d978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d974) {
            ctx->pc = 0x21D98Cu;
            goto label_21d98c;
        }
    }
    ctx->pc = 0x21D97Cu;
    // 0x21d97c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21d97cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d980: 0xc08763a  jal         func_21D8E8
    ctx->pc = 0x21D980u;
    SET_GPR_U32(ctx, 31, 0x21D988u);
    ctx->pc = 0x21D984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D980u;
    // 0x21d984: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D8E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D8E8u, 0x21D980u, 0x21D988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D988u;
label_21d988:
    // 0x21d988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21d988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21d98c:
    // 0x21d98c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21d98cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21d990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21d990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d994: 0x3e00008  jr          $ra
    ctx->pc = 0x21D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D994u;
        // 0x21d998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D99Cu;
    // 0x21d99c: 0x0  nop
    ctx->pc = 0x21d99cu;
    // NOP
    ctx->pc = 0x21d9a0u;
}
