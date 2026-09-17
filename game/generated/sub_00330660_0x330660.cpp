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

// Function: sub_00330660
// Address: 0x330660 - 0x3306b0
void sub_00330660_0x330660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00330660_0x330660");
#endif

    switch (ctx->pc) {
        case 0x330660u: goto label_330660;
        case 0x330664u: goto label_330664;
        case 0x330668u: goto label_330668;
        case 0x33066cu: goto label_33066c;
        case 0x330670u: goto label_330670;
        case 0x330674u: goto label_330674;
        case 0x330678u: goto label_330678;
        case 0x33067cu: goto label_33067c;
        case 0x330680u: goto label_330680;
        case 0x330684u: goto label_330684;
        case 0x330688u: goto label_330688;
        case 0x33068cu: goto label_33068c;
        case 0x330690u: goto label_330690;
        case 0x330694u: goto label_330694;
        case 0x330698u: goto label_330698;
        case 0x33069cu: goto label_33069c;
        case 0x3306a0u: goto label_3306a0;
        case 0x3306a4u: goto label_3306a4;
        case 0x3306a8u: goto label_3306a8;
        case 0x3306acu: goto label_3306ac;
        default: break;
    }

    ctx->pc = 0x330660u;

label_330660:
    // 0x330660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_330664:
    // 0x330664: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x330664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_330668:
    // 0x330668: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x330668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_33066c:
    // 0x33066c: 0xc0c8864  jal         func_322190
label_330670:
    if (ctx->pc == 0x330670u) {
        ctx->pc = 0x330670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33066Cu;
        // 0x330670: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330674u;
        goto label_330674;
    }
    ctx->pc = 0x33066Cu;
    SET_GPR_U32(ctx, 31, 0x330674u);
    ctx->pc = 0x330670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33066Cu;
    // 0x330670: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322190u, 0x33066Cu, 0x330674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330674u;
label_330674:
    // 0x330674: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x330674u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330678:
    // 0x330678: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x330678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33067c:
    // 0x33067c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x33067cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_330680:
    // 0x330680: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x330680u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330684:
    // 0x330684: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x330684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_330688:
    // 0x330688: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x330688u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_33068c:
    // 0x33068c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x33068cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_330690:
    // 0x330690: 0x40f809  jalr        $v0
label_330694:
    if (ctx->pc == 0x330694u) {
        ctx->pc = 0x330694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330690u;
        // 0x330694: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330698u;
        goto label_330698;
    }
    ctx->pc = 0x330690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330698u);
        ctx->pc = 0x330694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330690u;
        // 0x330694: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330690u, 0x330698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330698u;
label_330698:
    // 0x330698: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x330698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_33069c:
    // 0x33069c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33069cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3306a0:
    // 0x3306a0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3306a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3306a4:
    // 0x3306a4: 0x3e00008  jr          $ra
label_3306a8:
    if (ctx->pc == 0x3306A8u) {
        ctx->pc = 0x3306A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306A4u;
        // 0x3306a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3306ACu;
        goto label_3306ac;
    }
    ctx->pc = 0x3306A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3306A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306A4u;
        // 0x3306a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3306A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3306ACu;
label_3306ac:
    // 0x3306ac: 0x0  nop
    ctx->pc = 0x3306acu;
    // NOP
    ctx->pc = 0x3306b0u;
}
