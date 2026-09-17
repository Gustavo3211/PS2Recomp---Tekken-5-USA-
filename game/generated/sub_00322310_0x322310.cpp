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

// Function: sub_00322310
// Address: 0x322310 - 0x322398
void sub_00322310_0x322310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322310_0x322310");
#endif

    switch (ctx->pc) {
        case 0x322310u: goto label_322310;
        case 0x322314u: goto label_322314;
        case 0x322318u: goto label_322318;
        case 0x32231cu: goto label_32231c;
        case 0x322320u: goto label_322320;
        case 0x322324u: goto label_322324;
        case 0x322328u: goto label_322328;
        case 0x32232cu: goto label_32232c;
        case 0x322330u: goto label_322330;
        case 0x322334u: goto label_322334;
        case 0x322338u: goto label_322338;
        case 0x32233cu: goto label_32233c;
        case 0x322340u: goto label_322340;
        case 0x322344u: goto label_322344;
        case 0x322348u: goto label_322348;
        case 0x32234cu: goto label_32234c;
        case 0x322350u: goto label_322350;
        case 0x322354u: goto label_322354;
        case 0x322358u: goto label_322358;
        case 0x32235cu: goto label_32235c;
        case 0x322360u: goto label_322360;
        case 0x322364u: goto label_322364;
        case 0x322368u: goto label_322368;
        case 0x32236cu: goto label_32236c;
        case 0x322370u: goto label_322370;
        case 0x322374u: goto label_322374;
        case 0x322378u: goto label_322378;
        case 0x32237cu: goto label_32237c;
        case 0x322380u: goto label_322380;
        case 0x322384u: goto label_322384;
        case 0x322388u: goto label_322388;
        case 0x32238cu: goto label_32238c;
        case 0x322390u: goto label_322390;
        case 0x322394u: goto label_322394;
        default: break;
    }

    ctx->pc = 0x322310u;

label_322310:
    // 0x322310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x322310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_322314:
    // 0x322314: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x322314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_322318:
    // 0x322318: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x322318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_32231c:
    // 0x32231c: 0xc0c88a2  jal         func_322288
label_322320:
    if (ctx->pc == 0x322320u) {
        ctx->pc = 0x322320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32231Cu;
        // 0x322320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322324u;
        goto label_322324;
    }
    ctx->pc = 0x32231Cu;
    SET_GPR_U32(ctx, 31, 0x322324u);
    ctx->pc = 0x322320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32231Cu;
    // 0x322320: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322288u, 0x32231Cu, 0x322324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322324u;
label_322324:
    // 0x322324: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x322324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322328:
    // 0x322328: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x322328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_32232c:
    // 0x32232c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32232cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_322330:
    // 0x322330: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x322330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_322334:
    // 0x322334: 0x40f809  jalr        $v0
label_322338:
    if (ctx->pc == 0x322338u) {
        ctx->pc = 0x322338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322334u;
        // 0x322338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32233Cu;
        goto label_32233c;
    }
    ctx->pc = 0x322334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32233Cu);
        ctx->pc = 0x322338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322334u;
        // 0x322338: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322334u, 0x32233Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32233Cu;
label_32233c:
    // 0x32233c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32233cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322340:
    // 0x322340: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x322340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_322344:
    // 0x322344: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x322344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_322348:
    // 0x322348: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x322348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32234c:
    // 0x32234c: 0x40f809  jalr        $v0
label_322350:
    if (ctx->pc == 0x322350u) {
        ctx->pc = 0x322350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32234Cu;
        // 0x322350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322354u;
        goto label_322354;
    }
    ctx->pc = 0x32234Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322354u);
        ctx->pc = 0x322350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32234Cu;
        // 0x322350: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32234Cu, 0x322354u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322354u;
label_322354:
    // 0x322354: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x322354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322358:
    // 0x322358: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x322358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_32235c:
    // 0x32235c: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x32235cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_322360:
    // 0x322360: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x322360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_322364:
    // 0x322364: 0x40f809  jalr        $v0
label_322368:
    if (ctx->pc == 0x322368u) {
        ctx->pc = 0x322368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322364u;
        // 0x322368: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32236Cu;
        goto label_32236c;
    }
    ctx->pc = 0x322364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x32236Cu);
        ctx->pc = 0x322368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322364u;
        // 0x322368: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322364u, 0x32236Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32236Cu;
label_32236c:
    // 0x32236c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x32236cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_322370:
    // 0x322370: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x322370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
label_322374:
    // 0x322374: 0x84640000  lh          $a0, 0x0($v1)
    ctx->pc = 0x322374u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_322378:
    // 0x322378: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x322378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_32237c:
    // 0x32237c: 0x40f809  jalr        $v0
label_322380:
    if (ctx->pc == 0x322380u) {
        ctx->pc = 0x322380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32237Cu;
        // 0x322380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322384u;
        goto label_322384;
    }
    ctx->pc = 0x32237Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x322384u);
        ctx->pc = 0x322380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32237Cu;
        // 0x322380: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32237Cu, 0x322384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322384u;
label_322384:
    // 0x322384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322388:
    // 0x322388: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x322388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_32238c:
    // 0x32238c: 0x3e00008  jr          $ra
label_322390:
    if (ctx->pc == 0x322390u) {
        ctx->pc = 0x322390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32238Cu;
        // 0x322390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322394u;
        goto label_322394;
    }
    ctx->pc = 0x32238Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32238Cu;
        // 0x322390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32238Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322394u;
label_322394:
    // 0x322394: 0x0  nop
    ctx->pc = 0x322394u;
    // NOP
    ctx->pc = 0x322398u;
}
