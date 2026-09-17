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

// Function: sub_0033AAA0
// Address: 0x33aaa0 - 0x33ab30
void sub_0033AAA0_0x33aaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033AAA0_0x33aaa0");
#endif

    switch (ctx->pc) {
        case 0x33ab20u: goto label_33ab20;
        default: break;
    }

    ctx->pc = 0x33aaa0u;

    // 0x33aaa0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x33aaa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33aaa4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33aaa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33aaa8: 0x25020010  addiu       $v0, $t0, 0x10
    ctx->pc = 0x33aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x33aaac: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x33aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33aab0: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x33aab0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x33aab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33aab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33aab8: 0x24a9008f  addiu       $t1, $a1, 0x8F
    ctx->pc = 0x33aab8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 143));
    // 0x33aabc: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x33aabcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x33aac0: 0xac420000  sw          $v0, 0x0($v0)
    ctx->pc = 0x33aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 2));
    // 0x33aac4: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x33aac4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x33aac8: 0xad030028  sw          $v1, 0x28($t0)
    ctx->pc = 0x33aac8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
    // 0x33aacc: 0xad07002c  sw          $a3, 0x2C($t0)
    ctx->pc = 0x33aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 7));
    // 0x33aad0: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x33aad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x33aad4: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x33aad4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
    // 0x33aad8: 0xad000018  sw          $zero, 0x18($t0)
    ctx->pc = 0x33aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 0));
    // 0x33aadc: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x33aadcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x33aae0: 0xad080000  sw          $t0, 0x0($t0)
    ctx->pc = 0x33aae0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 8));
    // 0x33aae4: 0xad080004  sw          $t0, 0x4($t0)
    ctx->pc = 0x33aae4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 8));
    // 0x33aae8: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x33aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x33aaec: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x33AAECu;
    {
        const bool branch_taken_0x33aaec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AAECu;
        // 0x33aaf0: 0xad00000c  sw          $zero, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33aaec) {
            ctx->pc = 0x33AB10u;
            goto label_33ab10;
        }
    }
    ctx->pc = 0x33AAF4u;
    // 0x33aaf4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x33aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x33aaf8: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x33aaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
    // 0x33aafc: 0x2443fff0  addiu       $v1, $v0, -0x10
    ctx->pc = 0x33aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x33ab00: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x33ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x33ab04: 0xad030020  sw          $v1, 0x20($t0)
    ctx->pc = 0x33ab04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 3));
    // 0x33ab08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33AB08u;
    {
        const bool branch_taken_0x33ab08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33AB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB08u;
        // 0x33ab0c: 0xad020024  sw          $v0, 0x24($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ab08) {
            ctx->pc = 0x33AB18u;
            goto label_33ab18;
        }
    }
    ctx->pc = 0x33AB10u;
label_33ab10:
    // 0x33ab10: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x33ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x33ab14: 0xad000024  sw          $zero, 0x24($t0)
    ctx->pc = 0x33ab14u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 0));
label_33ab18:
    // 0x33ab18: 0xc0cb062  jal         func_32C188
    ctx->pc = 0x33AB18u;
    SET_GPR_U32(ctx, 31, 0x33AB20u);
    ctx->pc = 0x32C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C188u, 0x33AB18u, 0x33AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33AB20u;
label_33ab20:
    // 0x33ab20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33ab24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33ab24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33ab28: 0x3e00008  jr          $ra
    ctx->pc = 0x33AB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33AB28u;
        // 0x33ab2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33AB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33AB30u;
}
