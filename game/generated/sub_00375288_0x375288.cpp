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

// Function: sub_00375288
// Address: 0x375288 - 0x375338
void sub_00375288_0x375288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375288_0x375288");
#endif

    switch (ctx->pc) {
        case 0x375288u: goto label_375288;
        case 0x37528cu: goto label_37528c;
        case 0x375290u: goto label_375290;
        case 0x375294u: goto label_375294;
        case 0x375298u: goto label_375298;
        case 0x37529cu: goto label_37529c;
        case 0x3752a0u: goto label_3752a0;
        case 0x3752a4u: goto label_3752a4;
        case 0x3752a8u: goto label_3752a8;
        case 0x3752acu: goto label_3752ac;
        case 0x3752b0u: goto label_3752b0;
        case 0x3752b4u: goto label_3752b4;
        case 0x3752b8u: goto label_3752b8;
        case 0x3752bcu: goto label_3752bc;
        case 0x3752c0u: goto label_3752c0;
        case 0x3752c4u: goto label_3752c4;
        case 0x3752c8u: goto label_3752c8;
        case 0x3752ccu: goto label_3752cc;
        case 0x3752d0u: goto label_3752d0;
        case 0x3752d4u: goto label_3752d4;
        case 0x3752d8u: goto label_3752d8;
        case 0x3752dcu: goto label_3752dc;
        case 0x3752e0u: goto label_3752e0;
        case 0x3752e4u: goto label_3752e4;
        case 0x3752e8u: goto label_3752e8;
        case 0x3752ecu: goto label_3752ec;
        case 0x3752f0u: goto label_3752f0;
        case 0x3752f4u: goto label_3752f4;
        case 0x3752f8u: goto label_3752f8;
        case 0x3752fcu: goto label_3752fc;
        case 0x375300u: goto label_375300;
        case 0x375304u: goto label_375304;
        case 0x375308u: goto label_375308;
        case 0x37530cu: goto label_37530c;
        case 0x375310u: goto label_375310;
        case 0x375314u: goto label_375314;
        case 0x375318u: goto label_375318;
        case 0x37531cu: goto label_37531c;
        case 0x375320u: goto label_375320;
        case 0x375324u: goto label_375324;
        case 0x375328u: goto label_375328;
        case 0x37532cu: goto label_37532c;
        case 0x375330u: goto label_375330;
        case 0x375334u: goto label_375334;
        default: break;
    }

    ctx->pc = 0x375288u;

label_375288:
    // 0x375288: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x375288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_37528c:
    // 0x37528c: 0x24421eb8  addiu       $v0, $v0, 0x1EB8
    ctx->pc = 0x37528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7864));
label_375290:
    // 0x375290: 0x3e00008  jr          $ra
label_375294:
    if (ctx->pc == 0x375294u) {
        ctx->pc = 0x375294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375290u;
        // 0x375294: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375298u;
        goto label_375298;
    }
    ctx->pc = 0x375290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375290u;
        // 0x375294: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375298u;
label_375298:
    // 0x375298: 0x3e00008  jr          $ra
label_37529c:
    if (ctx->pc == 0x37529Cu) {
        ctx->pc = 0x3752A0u;
        goto label_3752a0;
    }
    ctx->pc = 0x375298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3752A0u;
label_3752a0:
    // 0x3752a0: 0x3e00008  jr          $ra
label_3752a4:
    if (ctx->pc == 0x3752A4u) {
        ctx->pc = 0x3752A8u;
        goto label_3752a8;
    }
    ctx->pc = 0x3752A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3752A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3752A8u;
label_3752a8:
    // 0x3752a8: 0x3e00008  jr          $ra
label_3752ac:
    if (ctx->pc == 0x3752ACu) {
        ctx->pc = 0x3752B0u;
        goto label_3752b0;
    }
    ctx->pc = 0x3752A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3752A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3752B0u;
label_3752b0:
    // 0x3752b0: 0x3e00008  jr          $ra
label_3752b4:
    if (ctx->pc == 0x3752B4u) {
        ctx->pc = 0x3752B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752B0u;
        // 0x3752b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3752B8u;
        goto label_3752b8;
    }
    ctx->pc = 0x3752B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3752B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752B0u;
        // 0x3752b4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3752B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3752B8u;
label_3752b8:
    // 0x3752b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3752b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3752bc:
    // 0x3752bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3752bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3752c0:
    // 0x3752c0: 0x3c100044  lui         $s0, 0x44
    ctx->pc = 0x3752c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)68 << 16));
label_3752c4:
    // 0x3752c4: 0x2610f100  addiu       $s0, $s0, -0xF00
    ctx->pc = 0x3752c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963456));
label_3752c8:
    // 0x3752c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3752c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3752cc:
    // 0x3752cc: 0xc0d0b24  jal         func_342C90
label_3752d0:
    if (ctx->pc == 0x3752D0u) {
        ctx->pc = 0x3752D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752CCu;
        // 0x3752d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3752D4u;
        goto label_3752d4;
    }
    ctx->pc = 0x3752CCu;
    SET_GPR_U32(ctx, 31, 0x3752D4u);
    ctx->pc = 0x3752D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3752CCu;
    // 0x3752d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342C90u, 0x3752CCu, 0x3752D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3752D4u;
label_3752d4:
    // 0x3752d4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x3752d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
label_3752d8:
    // 0x3752d8: 0x24631f70  addiu       $v1, $v1, 0x1F70
    ctx->pc = 0x3752d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8048));
label_3752dc:
    // 0x3752dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3752dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3752e0:
    // 0x3752e0: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3752e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
label_3752e4:
    // 0x3752e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3752e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3752e8:
    // 0x3752e8: 0x3e00008  jr          $ra
label_3752ec:
    if (ctx->pc == 0x3752ECu) {
        ctx->pc = 0x3752ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752E8u;
        // 0x3752ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3752F0u;
        goto label_3752f0;
    }
    ctx->pc = 0x3752E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3752ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3752E8u;
        // 0x3752ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3752E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3752F0u;
label_3752f0:
    // 0x3752f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3752f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3752f4:
    // 0x3752f4: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x3752f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
label_3752f8:
    // 0x3752f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3752f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3752fc:
    // 0x3752fc: 0x2484f100  addiu       $a0, $a0, -0xF00
    ctx->pc = 0x3752fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963456));
label_375300:
    // 0x375300: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x375300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_375304:
    // 0x375304: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x375304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_375308:
    // 0x375308: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x375308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_37530c:
    // 0x37530c: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x37530cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_375310:
    // 0x375310: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x375310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_375314:
    // 0x375314: 0xc0f809  jalr        $a2
label_375318:
    if (ctx->pc == 0x375318u) {
        ctx->pc = 0x375318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375314u;
        // 0x375318: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37531Cu;
        goto label_37531c;
    }
    ctx->pc = 0x375314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x37531Cu);
        ctx->pc = 0x375318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375314u;
        // 0x375318: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375314u, 0x37531Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x37531Cu;
label_37531c:
    // 0x37531c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37531cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_375320:
    // 0x375320: 0x3e00008  jr          $ra
label_375324:
    if (ctx->pc == 0x375324u) {
        ctx->pc = 0x375324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375320u;
        // 0x375324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375328u;
        goto label_375328;
    }
    ctx->pc = 0x375320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375320u;
        // 0x375324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375328u;
label_375328:
    // 0x375328: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x375328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_37532c:
    // 0x37532c: 0x3e00008  jr          $ra
label_375330:
    if (ctx->pc == 0x375330u) {
        ctx->pc = 0x375330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37532Cu;
        // 0x375330: 0x2442f100  addiu       $v0, $v0, -0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x375334u;
        goto label_375334;
    }
    ctx->pc = 0x37532Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37532Cu;
        // 0x375330: 0x2442f100  addiu       $v0, $v0, -0xF00 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37532Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375334u;
label_375334:
    // 0x375334: 0x0  nop
    ctx->pc = 0x375334u;
    // NOP
    ctx->pc = 0x375338u;
}
