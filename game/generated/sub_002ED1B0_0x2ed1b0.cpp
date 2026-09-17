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

// Function: sub_002ED1B0
// Address: 0x2ed1b0 - 0x2ed220
void sub_002ED1B0_0x2ed1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED1B0_0x2ed1b0");
#endif

    switch (ctx->pc) {
        case 0x2ed1b0u: goto label_2ed1b0;
        case 0x2ed1b4u: goto label_2ed1b4;
        case 0x2ed1b8u: goto label_2ed1b8;
        case 0x2ed1bcu: goto label_2ed1bc;
        case 0x2ed1c0u: goto label_2ed1c0;
        case 0x2ed1c4u: goto label_2ed1c4;
        case 0x2ed1c8u: goto label_2ed1c8;
        case 0x2ed1ccu: goto label_2ed1cc;
        case 0x2ed1d0u: goto label_2ed1d0;
        case 0x2ed1d4u: goto label_2ed1d4;
        case 0x2ed1d8u: goto label_2ed1d8;
        case 0x2ed1dcu: goto label_2ed1dc;
        case 0x2ed1e0u: goto label_2ed1e0;
        case 0x2ed1e4u: goto label_2ed1e4;
        case 0x2ed1e8u: goto label_2ed1e8;
        case 0x2ed1ecu: goto label_2ed1ec;
        case 0x2ed1f0u: goto label_2ed1f0;
        case 0x2ed1f4u: goto label_2ed1f4;
        case 0x2ed1f8u: goto label_2ed1f8;
        case 0x2ed1fcu: goto label_2ed1fc;
        case 0x2ed200u: goto label_2ed200;
        case 0x2ed204u: goto label_2ed204;
        case 0x2ed208u: goto label_2ed208;
        case 0x2ed20cu: goto label_2ed20c;
        case 0x2ed210u: goto label_2ed210;
        case 0x2ed214u: goto label_2ed214;
        case 0x2ed218u: goto label_2ed218;
        case 0x2ed21cu: goto label_2ed21c;
        default: break;
    }

    ctx->pc = 0x2ed1b0u;

label_2ed1b0:
    // 0x2ed1b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ed1b4:
    // 0x2ed1b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ed1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ed1b8:
    // 0x2ed1b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ed1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ed1bc:
    // 0x2ed1bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ed1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2ed1c0:
    // 0x2ed1c0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x2ed1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_2ed1c4:
    // 0x2ed1c4: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2ed1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2ed1c8:
    // 0x2ed1c8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2ed1cc:
    if (ctx->pc == 0x2ED1CCu) {
        ctx->pc = 0x2ED1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1C8u;
        // 0x2ed1cc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED1D0u;
        goto label_2ed1d0;
    }
    ctx->pc = 0x2ED1C8u;
    {
        const bool branch_taken_0x2ed1c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed1c8) {
            ctx->pc = 0x2ED1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ED1C8u;
            // 0x2ed1cc: 0xaca00004  sw          $zero, 0x4($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ED1E4u;
            goto label_2ed1e4;
        }
    }
    ctx->pc = 0x2ED1D0u;
label_2ed1d0:
    // 0x2ed1d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2ed1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2ed1d4:
    // 0x2ed1d4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2ed1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2ed1d8:
    // 0x2ed1d8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2ed1dc:
    if (ctx->pc == 0x2ED1DCu) {
        ctx->pc = 0x2ED1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1D8u;
        // 0x2ed1dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED1E0u;
        goto label_2ed1e0;
    }
    ctx->pc = 0x2ED1D8u;
    {
        const bool branch_taken_0x2ed1d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ED1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED1D8u;
        // 0x2ed1dc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed1d8) {
            ctx->pc = 0x2ED1ECu;
            goto label_2ed1ec;
        }
    }
    ctx->pc = 0x2ED1E0u;
label_2ed1e0:
    // 0x2ed1e0: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ed1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
label_2ed1e4:
    // 0x2ed1e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ed1e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ed1e8:
    // 0x2ed1e8: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x2ed1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_2ed1ec:
    // 0x2ed1ec: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2ed1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2ed1f0:
    // 0x2ed1f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2ed1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ed1f4:
    // 0x2ed1f4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2ed1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2ed1f8:
    // 0x2ed1f8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ed1f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ed1fc:
    // 0x2ed1fc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ed1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ed200:
    // 0x2ed200: 0x60f809  jalr        $v1
label_2ed204:
    if (ctx->pc == 0x2ED204u) {
        ctx->pc = 0x2ED204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED200u;
        // 0x2ed204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED208u;
        goto label_2ed208;
    }
    ctx->pc = 0x2ED200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2ED208u);
        ctx->pc = 0x2ED204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED200u;
        // 0x2ed204: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED200u, 0x2ED208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2ED208u;
label_2ed208:
    // 0x2ed208: 0xc0bb488  jal         func_2ED220
label_2ed20c:
    if (ctx->pc == 0x2ED20Cu) {
        ctx->pc = 0x2ED20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED208u;
        // 0x2ed20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED210u;
        goto label_2ed210;
    }
    ctx->pc = 0x2ED208u;
    SET_GPR_U32(ctx, 31, 0x2ED210u);
    ctx->pc = 0x2ED20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED208u;
    // 0x2ed20c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED220u, 0x2ED208u, 0x2ED210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED210u;
label_2ed210:
    // 0x2ed210: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ed210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ed214:
    // 0x2ed214: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ed214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ed218:
    // 0x2ed218: 0x3e00008  jr          $ra
label_2ed21c:
    if (ctx->pc == 0x2ED21Cu) {
        ctx->pc = 0x2ED21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED218u;
        // 0x2ed21c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2ED220u;
        goto label_fallthrough_0x2ed218;
    }
    ctx->pc = 0x2ED218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED218u;
        // 0x2ed21c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ed218:
    ctx->pc = 0x2ED220u;
}
