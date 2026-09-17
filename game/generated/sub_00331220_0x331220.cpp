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

// Function: sub_00331220
// Address: 0x331220 - 0x331420
void sub_00331220_0x331220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331220_0x331220");
#endif

    switch (ctx->pc) {
        case 0x331244u: goto label_331244;
        case 0x33125cu: goto label_33125c;
        case 0x331264u: goto label_331264;
        case 0x3312f8u: goto label_3312f8;
        case 0x331348u: goto label_331348;
        case 0x33136cu: goto label_33136c;
        case 0x331388u: goto label_331388;
        case 0x33139cu: goto label_33139c;
        case 0x3313a4u: goto label_3313a4;
        case 0x3313b8u: goto label_3313b8;
        case 0x3313c4u: goto label_3313c4;
        case 0x3313d4u: goto label_3313d4;
        case 0x3313e4u: goto label_3313e4;
        case 0x3313f8u: goto label_3313f8;
        default: break;
    }

    ctx->pc = 0x331220u;

    // 0x331220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x331220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x331224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331228: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331228u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33122c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33122cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x331230: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x331230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331234: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x331234u;
    {
        const bool branch_taken_0x331234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x331238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331234u;
        // 0x331238: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331234) {
            ctx->pc = 0x3312FCu;
            goto label_3312fc;
        }
    }
    ctx->pc = 0x33123Cu;
    // 0x33123c: 0xc047134  jal         func_11C4D0
    ctx->pc = 0x33123Cu;
    SET_GPR_U32(ctx, 31, 0x331244u);
    ctx->pc = 0x331240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33123Cu;
    // 0x331240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C4D0u, 0x33123Cu, 0x331244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331244u;
label_331244:
    // 0x331244: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x331244u;
    {
        const bool branch_taken_0x331244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x331244) {
            ctx->pc = 0x331248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331244u;
            // 0x331248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331300u;
            goto label_331300;
        }
    }
    ctx->pc = 0x33124Cu;
    // 0x33124c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33124cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331250: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x331250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331254: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x331254u;
    {
        const bool branch_taken_0x331254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x331258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331254u;
        // 0x331258: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331254) {
            ctx->pc = 0x3312E4u;
            goto label_3312e4;
        }
    }
    ctx->pc = 0x33125Cu;
label_33125c:
    // 0x33125c: 0xc047322  jal         func_11CC88
    ctx->pc = 0x33125Cu;
    SET_GPR_U32(ctx, 31, 0x331264u);
    ctx->pc = 0x11CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CC88u, 0x33125Cu, 0x331264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331264u;
label_331264:
    // 0x331264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x331268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33126c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x33126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x331270: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x331270u;
    {
        const bool branch_taken_0x331270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x331274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331270u;
        // 0x331274: 0x28830006  slti        $v1, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331270) {
            ctx->pc = 0x3312C8u;
            goto label_3312c8;
        }
    }
    ctx->pc = 0x331278u;
    // 0x331278: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x331278u;
    {
        const bool branch_taken_0x331278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x331278) {
            ctx->pc = 0x33127Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331278u;
            // 0x33127c: 0x240200fe  addiu       $v0, $zero, 0xFE (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331298u;
            goto label_331298;
        }
    }
    ctx->pc = 0x331280u;
    // 0x331280: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x331280u;
    {
        const bool branch_taken_0x331280 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x331284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331280u;
        // 0x331284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331280) {
            ctx->pc = 0x3312FCu;
            goto label_3312fc;
        }
    }
    ctx->pc = 0x331288u;
    // 0x331288: 0x1085fff4  beq         $a0, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x331288u;
    {
        const bool branch_taken_0x331288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x33128Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331288u;
        // 0x33128c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331288) {
            ctx->pc = 0x33125Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33125c;
        }
    }
    ctx->pc = 0x331290u;
    // 0x331290: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x331290u;
    {
        const bool branch_taken_0x331290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331290u;
        // 0x331294: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331290) {
            ctx->pc = 0x3312DCu;
            goto label_3312dc;
        }
    }
    ctx->pc = 0x331298u;
label_331298:
    // 0x331298: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x331298u;
    {
        const bool branch_taken_0x331298 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331298u;
        // 0x33129c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331298) {
            ctx->pc = 0x3312D0u;
            goto label_3312d0;
        }
    }
    ctx->pc = 0x3312A0u;
    // 0x3312a0: 0x288200ff  slti        $v0, $a0, 0xFF
    ctx->pc = 0x3312a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x3312a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3312A4u;
    {
        const bool branch_taken_0x3312a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3312A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312A4u;
        // 0x3312a8: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312a4) {
            ctx->pc = 0x3312C0u;
            goto label_3312c0;
        }
    }
    ctx->pc = 0x3312ACu;
    // 0x3312ac: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3312acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3312b0: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3312B0u;
    {
        const bool branch_taken_0x3312b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3312b0) {
            ctx->pc = 0x3312B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3312B0u;
            // 0x3312b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3312D0u;
            goto label_3312d0;
        }
    }
    ctx->pc = 0x3312B8u;
    // 0x3312b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3312B8u;
    {
        const bool branch_taken_0x3312b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3312BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312B8u;
        // 0x3312bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312b8) {
            ctx->pc = 0x3312D8u;
            goto label_3312d8;
        }
    }
    ctx->pc = 0x3312C0u;
label_3312c0:
    // 0x3312c0: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3312C0u;
    {
        const bool branch_taken_0x3312c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3312c0) {
            ctx->pc = 0x3312C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3312C0u;
            // 0x3312c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3312D8u;
            goto label_3312d8;
        }
    }
    ctx->pc = 0x3312C8u;
label_3312c8:
    // 0x3312c8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3312C8u;
    {
        const bool branch_taken_0x3312c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3312CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312C8u;
        // 0x3312cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312c8) {
            ctx->pc = 0x3312FCu;
            goto label_3312fc;
        }
    }
    ctx->pc = 0x3312D0u;
label_3312d0:
    // 0x3312d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3312D0u;
    {
        const bool branch_taken_0x3312d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3312D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3312D0u;
        // 0x3312d4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3312d0) {
            ctx->pc = 0x3312DCu;
            goto label_3312dc;
        }
    }
    ctx->pc = 0x3312D8u;
label_3312d8:
    // 0x3312d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3312d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3312dc:
    // 0x3312dc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x3312dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x3312e0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3312e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3312e4:
    // 0x3312e4: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x3312e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x3312e8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3312e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3312ec: 0x8c844e74  lw          $a0, 0x4E74($a0)
    ctx->pc = 0x3312ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20084)));
    // 0x3312f0: 0xc04735a  jal         func_11CD68
    ctx->pc = 0x3312F0u;
    SET_GPR_U32(ctx, 31, 0x3312F8u);
    ctx->pc = 0x11CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CD68u, 0x3312F0u, 0x3312F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3312F8u;
label_3312f8:
    // 0x3312f8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3312f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3312fc:
    // 0x3312fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3312fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_331300:
    // 0x331300: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x331300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331304: 0x3e00008  jr          $ra
    ctx->pc = 0x331304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331304u;
        // 0x331308: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33130Cu;
    // 0x33130c: 0x0  nop
    ctx->pc = 0x33130cu;
    // NOP
    // 0x331310: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x331310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x331314: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x331314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x331318: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x331318u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33131c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33131cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331324: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331328: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x331328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x33132c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x33132cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x331330: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x331330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x331334: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x331334u;
    {
        const bool branch_taken_0x331334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331334u;
        // 0x331338: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331334) {
            ctx->pc = 0x331360u;
            goto label_331360;
        }
    }
    ctx->pc = 0x33133Cu;
    // 0x33133c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x33133cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x331340: 0xc04513c  jal         func_1144F0
    ctx->pc = 0x331340u;
    SET_GPR_U32(ctx, 31, 0x331348u);
    ctx->pc = 0x331344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331340u;
    // 0x331344: 0x24843178  addiu       $a0, $a0, 0x3178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1144F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144F0u, 0x331340u, 0x331348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331348u;
label_331348:
    // 0x331348: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x331348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33134c: 0x641000a  bgez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x33134Cu;
    {
        const bool branch_taken_0x33134c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x331350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33134Cu;
        // 0x331350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33134c) {
            ctx->pc = 0x331378u;
            goto label_331378;
        }
    }
    ctx->pc = 0x331354u;
    // 0x331354: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x331354u;
    {
        const bool branch_taken_0x331354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331354u;
        // 0x331358: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331354) {
            ctx->pc = 0x331400u;
            goto label_331400;
        }
    }
    ctx->pc = 0x33135Cu;
    // 0x33135c: 0x0  nop
    ctx->pc = 0x33135cu;
    // NOP
label_331360:
    // 0x331360: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x331360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x331364: 0xc04513c  jal         func_1144F0
    ctx->pc = 0x331364u;
    SET_GPR_U32(ctx, 31, 0x33136Cu);
    ctx->pc = 0x331368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331364u;
    // 0x331368: 0x24843190  addiu       $a0, $a0, 0x3190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1144F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1144F0u, 0x331364u, 0x33136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33136Cu;
label_33136c:
    // 0x33136c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x33136cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331370: 0x6400022  bltz        $s2, . + 4 + (0x22 << 2)
    ctx->pc = 0x331370u;
    {
        const bool branch_taken_0x331370 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x331374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331370u;
        // 0x331374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331370) {
            ctx->pc = 0x3313FCu;
            goto label_3313fc;
        }
    }
    ctx->pc = 0x331378u;
label_331378:
    // 0x331378: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33137c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x33137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331380: 0xc04523e  jal         func_1148F8
    ctx->pc = 0x331380u;
    SET_GPR_U32(ctx, 31, 0x331388u);
    ctx->pc = 0x331384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331380u;
    // 0x331384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x331380u, 0x331388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331388u;
label_331388:
    // 0x331388: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x331388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33138c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33138cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x331390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331394: 0xc04523e  jal         func_1148F8
    ctx->pc = 0x331394u;
    SET_GPR_U32(ctx, 31, 0x33139Cu);
    ctx->pc = 0x331398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331394u;
    // 0x331398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1148F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1148F8u, 0x331394u, 0x33139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33139Cu;
label_33139c:
    // 0x33139c: 0xc0d11ac  jal         func_3446B0
    ctx->pc = 0x33139Cu;
    SET_GPR_U32(ctx, 31, 0x3313A4u);
    ctx->pc = 0x3313A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33139Cu;
    // 0x3313a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3446B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3446B0u, 0x33139Cu, 0x3313A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313A4u;
label_3313a4:
    // 0x3313a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3313a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3313a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3313acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313b0: 0xc0452ce  jal         func_114B38
    ctx->pc = 0x3313B0u;
    SET_GPR_U32(ctx, 31, 0x3313B8u);
    ctx->pc = 0x3313B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313B0u;
    // 0x3313b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114B38u, 0x3313B0u, 0x3313B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313B8u;
label_3313b8:
    // 0x3313b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3313b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3313bc: 0xc0451e0  jal         func_114780
    ctx->pc = 0x3313BCu;
    SET_GPR_U32(ctx, 31, 0x3313C4u);
    ctx->pc = 0x3313C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313BCu;
    // 0x3313c0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114780u, 0x3313BCu, 0x3313C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313C4u;
label_3313c4:
    // 0x3313c4: 0x16110005  bne         $s0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3313C4u;
    {
        const bool branch_taken_0x3313c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3313C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313C4u;
        // 0x3313c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313c4) {
            ctx->pc = 0x3313DCu;
            goto label_3313dc;
        }
    }
    ctx->pc = 0x3313CCu;
    // 0x3313cc: 0xc0cd300  jal         func_334C00
    ctx->pc = 0x3313CCu;
    SET_GPR_U32(ctx, 31, 0x3313D4u);
    ctx->pc = 0x3313D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3313CCu;
    // 0x3313d0: 0x8e85000c  lw          $a1, 0xC($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x334C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334C00u, 0x3313CCu, 0x3313D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313D4u;
label_3313d4:
    // 0x3313d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3313D4u;
    {
        const bool branch_taken_0x3313d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3313D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313D4u;
        // 0x3313d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313d4) {
            ctx->pc = 0x3313F0u;
            goto label_3313f0;
        }
    }
    ctx->pc = 0x3313DCu;
label_3313dc:
    // 0x3313dc: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x3313DCu;
    SET_GPR_U32(ctx, 31, 0x3313E4u);
    ctx->pc = 0x3446D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3446D0u, 0x3313DCu, 0x3313E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313E4u;
label_3313e4:
    // 0x3313e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3313E4u;
    {
        const bool branch_taken_0x3313e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3313E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3313E4u;
        // 0x3313e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3313e4) {
            ctx->pc = 0x3313FCu;
            goto label_3313fc;
        }
    }
    ctx->pc = 0x3313ECu;
    // 0x3313ec: 0x0  nop
    ctx->pc = 0x3313ecu;
    // NOP
label_3313f0:
    // 0x3313f0: 0xc0d11b4  jal         func_3446D0
    ctx->pc = 0x3313F0u;
    SET_GPR_U32(ctx, 31, 0x3313F8u);
    ctx->pc = 0x3446D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3446D0u, 0x3313F0u, 0x3313F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3313F8u;
label_3313f8:
    // 0x3313f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3313f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3313fc:
    // 0x3313fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3313fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_331400:
    // 0x331400: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331400u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331404: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x331404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331408: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x331408u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33140c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x33140cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331410: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x331410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x331414: 0x3e00008  jr          $ra
    ctx->pc = 0x331414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331414u;
        // 0x331418: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33141Cu;
    // 0x33141c: 0x0  nop
    ctx->pc = 0x33141cu;
    // NOP
    ctx->pc = 0x331420u;
}
