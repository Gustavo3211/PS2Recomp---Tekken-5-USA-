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

// Function: sub_0020C208
// Address: 0x20c208 - 0x20cb10
void sub_0020C208_0x20c208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C208_0x20c208");
#endif

    switch (ctx->pc) {
        case 0x20c244u: goto label_20c244;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2f4u: goto label_20c2f4;
        case 0x20c32cu: goto label_20c32c;
        case 0x20c368u: goto label_20c368;
        case 0x20c3a8u: goto label_20c3a8;
        case 0x20c404u: goto label_20c404;
        case 0x20c41cu: goto label_20c41c;
        case 0x20c424u: goto label_20c424;
        case 0x20c42cu: goto label_20c42c;
        case 0x20c448u: goto label_20c448;
        case 0x20c46cu: goto label_20c46c;
        case 0x20c4d0u: goto label_20c4d0;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c528u: goto label_20c528;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c590u: goto label_20c590;
        case 0x20c59cu: goto label_20c59c;
        case 0x20c624u: goto label_20c624;
        case 0x20c694u: goto label_20c694;
        case 0x20c69cu: goto label_20c69c;
        case 0x20c714u: goto label_20c714;
        case 0x20c790u: goto label_20c790;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c82cu: goto label_20c82c;
        case 0x20c834u: goto label_20c834;
        case 0x20c840u: goto label_20c840;
        case 0x20c864u: goto label_20c864;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c878u: goto label_20c878;
        case 0x20c8c8u: goto label_20c8c8;
        case 0x20c914u: goto label_20c914;
        case 0x20c970u: goto label_20c970;
        case 0x20c9bcu: goto label_20c9bc;
        case 0x20ca18u: goto label_20ca18;
        case 0x20ca28u: goto label_20ca28;
        case 0x20ca48u: goto label_20ca48;
        case 0x20ca80u: goto label_20ca80;
        case 0x20caa8u: goto label_20caa8;
        case 0x20cab0u: goto label_20cab0;
        case 0x20cac0u: goto label_20cac0;
        case 0x20cae0u: goto label_20cae0;
        default: break;
    }

    ctx->pc = 0x20c208u;

    // 0x20c208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20c20c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x20c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x20c210: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20c210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20c214: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20c214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20c218: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x20c21c: 0x245488d0  addiu       $s4, $v0, -0x7730
    ctx->pc = 0x20c21cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
    // 0x20c220: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x20c220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x20c224: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x20c224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c228: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20c22c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20c22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x20c230: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x20c230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x20c234: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20c238: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x20c238u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3A88D0u));
    // 0x20c23c: 0xc07ebb4  jal         func_1FAED0
    ctx->pc = 0x20C23Cu;
    SET_GPR_U32(ctx, 31, 0x20C244u);
    ctx->pc = 0x20C240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C23Cu;
    // 0x20c240: 0x8e950004  lw          $s5, 0x4($s4) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAED0u, 0x20C23Cu, 0x20C244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C244u;
label_20c244:
    // 0x20c244: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c24c: 0x16c20007  bne         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C24Cu;
    {
        const bool branch_taken_0x20c24c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C24Cu;
        // 0x20c250: 0x8e120008  lw          $s2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c24c) {
            ctx->pc = 0x20C26Cu;
            goto label_20c26c;
        }
    }
    ctx->pc = 0x20C254u;
    // 0x20c254: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20c254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20c258: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x20c258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c25c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x20c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x20c260: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20c260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c264: 0xc083020  jal         func_20C080
    ctx->pc = 0x20C264u;
    SET_GPR_U32(ctx, 31, 0x20C26Cu);
    ctx->pc = 0x20C268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C264u;
    // 0x20c268: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C080u, 0x20C264u, 0x20C26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C26Cu;
label_20c26c:
    // 0x20c26c: 0x926201bc  lbu         $v0, 0x1BC($s3)
    ctx->pc = 0x20c26cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 444)));
    // 0x20c270: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C270u;
    {
        const bool branch_taken_0x20c270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c270) {
            ctx->pc = 0x20C274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C270u;
            // 0x20c274: 0x8e950000  lw          $s5, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C290u;
            goto label_20c290;
        }
    }
    ctx->pc = 0x20C278u;
    // 0x20c278: 0x8e950004  lw          $s5, 0x4($s4)
    ctx->pc = 0x20c278u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x20c27c: 0x8f88a848  lw          $t0, -0x57B8($gp)
    ctx->pc = 0x20c27cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944840)));
    // 0x20c280: 0x8f84a850  lw          $a0, -0x57B0($gp)
    ctx->pc = 0x20c280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944848)));
    // 0x20c284: 0x8f91a858  lw          $s1, -0x57A8($gp)
    ctx->pc = 0x20c284u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944856)));
    // 0x20c288: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20C288u;
    {
        const bool branch_taken_0x20c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C288u;
        // 0x20c28c: 0x8e930000  lw          $s3, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c288) {
            ctx->pc = 0x20C2ACu;
            goto label_20c2ac;
        }
    }
    ctx->pc = 0x20C290u;
label_20c290:
    // 0x20c290: 0x2782a848  addiu       $v0, $gp, -0x57B8
    ctx->pc = 0x20c290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944840));
    // 0x20c294: 0x2783a850  addiu       $v1, $gp, -0x57B0
    ctx->pc = 0x20c294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944848));
    // 0x20c298: 0x8c480004  lw          $t0, 0x4($v0)
    ctx->pc = 0x20c298u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20c29c: 0x2782a858  addiu       $v0, $gp, -0x57A8
    ctx->pc = 0x20c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294944856));
    // 0x20c2a0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x20c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20c2a4: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x20c2a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x20c2a8: 0x8e930004  lw          $s3, 0x4($s4)
    ctx->pc = 0x20c2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_20c2ac:
    // 0x20c2ac: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x20c2acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c2b0: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20c2b4: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C2B4u;
    {
        const bool branch_taken_0x20c2b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2B4u;
        // 0x20c2b8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2b4) {
            ctx->pc = 0x20C2CCu;
            goto label_20c2cc;
        }
    }
    ctx->pc = 0x20C2BCu;
    // 0x20c2bc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x20c2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20c2c0: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x20c2c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x20c2c4: 0x38c20001  xori        $v0, $a2, 0x1
    ctx->pc = 0x20c2c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    // 0x20c2c8: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x20c2c8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_20c2cc:
    // 0x20c2cc: 0x30820090  andi        $v0, $a0, 0x90
    ctx->pc = 0x20c2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)144);
    // 0x20c2d0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x20C2D0u;
    {
        const bool branch_taken_0x20c2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2d0) {
            ctx->pc = 0x20C2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C2D0u;
            // 0x20c2d4: 0x32221000  andi        $v0, $s1, 0x1000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C300u;
            goto label_20c300;
        }
    }
    ctx->pc = 0x20C2D8u;
    // 0x20c2d8: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C2D8u;
    SET_GPR_U32(ctx, 31, 0x20C2E0u);
    ctx->pc = 0x20C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2D8u;
    // 0x20c2dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C2D8u, 0x20C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2E0u;
label_20c2e0:
    // 0x20c2e0: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x20C2E0u;
    SET_GPR_U32(ctx, 31, 0x20C2E8u);
    ctx->pc = 0x20C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2E0u;
    // 0x20c2e4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x20C2E0u, 0x20C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2E8u;
label_20c2e8:
    // 0x20c2e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20c2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c2ec: 0xc083064  jal         func_20C190
    ctx->pc = 0x20C2ECu;
    SET_GPR_U32(ctx, 31, 0x20C2F4u);
    ctx->pc = 0x20C2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C2ECu;
    // 0x20c2f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C190u, 0x20C2ECu, 0x20C2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C2F4u;
label_20c2f4:
    // 0x20c2f4: 0x100001fb  b           . + 4 + (0x1FB << 2)
    ctx->pc = 0x20C2F4u;
    {
        const bool branch_taken_0x20c2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C2F4u;
        // 0x20c2f8: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c2f4) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C2FCu;
    // 0x20c2fc: 0x0  nop
    ctx->pc = 0x20c2fcu;
    // NOP
label_20c300:
    // 0x20c300: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20C300u;
    {
        const bool branch_taken_0x20c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C300u;
        // 0x20c304: 0x30820060  andi        $v0, $a0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c300) {
            ctx->pc = 0x20C338u;
            goto label_20c338;
        }
    }
    ctx->pc = 0x20C308u;
    // 0x20c308: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20C308u;
    {
        const bool branch_taken_0x20c308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C308u;
        // 0x20c30c: 0x32224000  andi        $v0, $s1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c308) {
            ctx->pc = 0x20C33Cu;
            goto label_20c33c;
        }
    }
    ctx->pc = 0x20C310u;
    // 0x20c310: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x20c310u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x20c314: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20c314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20c318: 0x2a420000  slti        $v0, $s2, 0x0
    ctx->pc = 0x20c318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x20c31c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20c31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c320: 0x471818  mult        $v1, $v0, $a3
    ctx->pc = 0x20c320u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x20c324: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C324u;
    SET_GPR_U32(ctx, 31, 0x20C32Cu);
    ctx->pc = 0x20C328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C324u;
    // 0x20c328: 0x729021  addu        $s2, $v1, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C324u, 0x20C32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C32Cu;
label_20c32c:
    // 0x20c32c: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x20C32Cu;
    {
        const bool branch_taken_0x20c32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C32Cu;
        // 0x20c330: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c32c) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C334u;
    // 0x20c334: 0x0  nop
    ctx->pc = 0x20c334u;
    // NOP
label_20c338:
    // 0x20c338: 0x32224000  andi        $v0, $s1, 0x4000
    ctx->pc = 0x20c338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)16384);
label_20c33c:
    // 0x20c33c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20C33Cu;
    {
        const bool branch_taken_0x20c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C33Cu;
        // 0x20c340: 0x30820060  andi        $v0, $a0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c33c) {
            ctx->pc = 0x20C370u;
            goto label_20c370;
        }
    }
    ctx->pc = 0x20C344u;
    // 0x20c344: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C344u;
    {
        const bool branch_taken_0x20c344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C344u;
        // 0x20c348: 0x31025000  andi        $v0, $t0, 0x5000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)20480);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c344) {
            ctx->pc = 0x20C374u;
            goto label_20c374;
        }
    }
    ctx->pc = 0x20C34Cu;
    // 0x20c34c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x20c34cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x20c350: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x20c350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x20c354: 0x2471823  subu        $v1, $s2, $a3
    ctx->pc = 0x20c354u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x20c358: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x20c358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x20c35c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20c35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c360: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C360u;
    SET_GPR_U32(ctx, 31, 0x20C368u);
    ctx->pc = 0x20C364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C360u;
    // 0x20c364: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C360u, 0x20C368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C368u;
label_20c368:
    // 0x20c368: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x20C368u;
    {
        const bool branch_taken_0x20c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C368u;
        // 0x20c36c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c368) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C370u;
label_20c370:
    // 0x20c370: 0x31025000  andi        $v0, $t0, 0x5000
    ctx->pc = 0x20c370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)20480);
label_20c374:
    // 0x20c374: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C374u;
    {
        const bool branch_taken_0x20c374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C374u;
        // 0x20c378: 0x30820060  andi        $v0, $a0, 0x60 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c374) {
            ctx->pc = 0x20C384u;
            goto label_20c384;
        }
    }
    ctx->pc = 0x20C37Cu;
    // 0x20c37c: 0x504001d9  beql        $v0, $zero, . + 4 + (0x1D9 << 2)
    ctx->pc = 0x20C37Cu;
    {
        const bool branch_taken_0x20c37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c37c) {
            ctx->pc = 0x20C380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C37Cu;
            // 0x20c380: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C384u;
label_20c384:
    // 0x20c384: 0x16400042  bnez        $s2, . + 4 + (0x42 << 2)
    ctx->pc = 0x20C384u;
    {
        const bool branch_taken_0x20c384 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C384u;
        // 0x20c388: 0x911025  or          $v0, $a0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c384) {
            ctx->pc = 0x20C490u;
            goto label_20c490;
        }
    }
    ctx->pc = 0x20C38Cu;
    // 0x20c38c: 0x3042a000  andi        $v0, $v0, 0xA000
    ctx->pc = 0x20c38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40960);
    // 0x20c390: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x20C390u;
    {
        const bool branch_taken_0x20c390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c390) {
            ctx->pc = 0x20C490u;
            goto label_20c490;
        }
    }
    ctx->pc = 0x20C398u;
    // 0x20c398: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C398u;
    {
        const bool branch_taken_0x20c398 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c398) {
            ctx->pc = 0x20C39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C398u;
            // 0x20c39c: 0x32228000  andi        $v0, $s1, 0x8000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C3B8u;
            goto label_20c3b8;
        }
    }
    ctx->pc = 0x20C3A0u;
    // 0x20c3a0: 0xc09dccc  jal         func_277330
    ctx->pc = 0x20C3A0u;
    SET_GPR_U32(ctx, 31, 0x20C3A8u);
    ctx->pc = 0x20C3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3A0u;
    // 0x20c3a4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277330u, 0x20C3A0u, 0x20C3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C3A8u;
label_20c3a8:
    // 0x20c3a8: 0x8e0203e8  lw          $v0, 0x3E8($s0)
    ctx->pc = 0x20c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x20c3ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x20c3acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c3b0: 0xae0203ec  sw          $v0, 0x3EC($s0)
    ctx->pc = 0x20c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1004), GPR_U32(ctx, 2));
    // 0x20c3b4: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x20c3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
label_20c3b8:
    // 0x20c3b8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C3B8u;
    {
        const bool branch_taken_0x20c3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3B8u;
        // 0x20c3bc: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3b8) {
            ctx->pc = 0x20C3CCu;
            goto label_20c3cc;
        }
    }
    ctx->pc = 0x20C3C0u;
    // 0x20c3c0: 0x32222000  andi        $v0, $s1, 0x2000
    ctx->pc = 0x20c3c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
    // 0x20c3c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C3C4u;
    {
        const bool branch_taken_0x20c3c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3C4u;
        // 0x20c3c8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3c4) {
            ctx->pc = 0x20C3D4u;
            goto label_20c3d4;
        }
    }
    ctx->pc = 0x20C3CCu;
label_20c3cc:
    // 0x20c3cc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20c3d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c3d4:
    // 0x20c3d4: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C3D4u;
    {
        const bool branch_taken_0x20c3d4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x20c3d4) {
            ctx->pc = 0x20C3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C3D4u;
            // 0x20c3d8: 0x28a20003  slti        $v0, $a1, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C3E8u;
            goto label_20c3e8;
        }
    }
    ctx->pc = 0x20C3DCu;
    // 0x20c3dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20C3DCu;
    {
        const bool branch_taken_0x20c3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3DCu;
        // 0x20c3e0: 0x24a20003  addiu       $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3dc) {
            ctx->pc = 0x20C3F4u;
            goto label_20c3f4;
        }
    }
    ctx->pc = 0x20C3E4u;
    // 0x20c3e4: 0x0  nop
    ctx->pc = 0x20c3e4u;
    // NOP
label_20c3e8:
    // 0x20c3e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C3E8u;
    {
        const bool branch_taken_0x20c3e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C3E8u;
        // 0x20c3ec: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3e8) {
            ctx->pc = 0x20C3FCu;
            goto label_20c3fc;
        }
    }
    ctx->pc = 0x20C3F0u;
    // 0x20c3f0: 0x24a2fffd  addiu       $v0, $a1, -0x3
    ctx->pc = 0x20c3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
label_20c3f4:
    // 0x20c3f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20c3f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c3fc:
    // 0x20c3fc: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C3FCu;
    SET_GPR_U32(ctx, 31, 0x20C404u);
    ctx->pc = 0x20C400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C3FCu;
    // 0x20c400: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C3FCu, 0x20C404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C404u;
label_20c404:
    // 0x20c404: 0xa600003a  sh          $zero, 0x3A($s0)
    ctx->pc = 0x20c404u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c408: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x20c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x20c40c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c40cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c410: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x20c410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x20c414: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x20C414u;
    SET_GPR_U32(ctx, 31, 0x20C41Cu);
    ctx->pc = 0x20C418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C414u;
    // 0x20c418: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x20C414u, 0x20C41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C41Cu;
label_20c41c:
    // 0x20c41c: 0xc07e57c  jal         func_1F95F0
    ctx->pc = 0x20C41Cu;
    SET_GPR_U32(ctx, 31, 0x20C424u);
    ctx->pc = 0x20C420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C41Cu;
    // 0x20c420: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F95F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F95F0u, 0x20C41Cu, 0x20C424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C424u;
label_20c424:
    // 0x20c424: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x20C424u;
    SET_GPR_U32(ctx, 31, 0x20C42Cu);
    ctx->pc = 0x20C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C424u;
    // 0x20c428: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x20C424u, 0x20C42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C42Cu;
label_20c42c:
    // 0x20c42c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20c430: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C430u;
    {
        const bool branch_taken_0x20c430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C430u;
        // 0x20c434: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c430) {
            ctx->pc = 0x20C450u;
            goto label_20c450;
        }
    }
    ctx->pc = 0x20C438u;
    // 0x20c438: 0x8e0203ec  lw          $v0, 0x3EC($s0)
    ctx->pc = 0x20c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x20c43c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x20c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x20c440: 0xc09dcd0  jal         func_277340
    ctx->pc = 0x20C440u;
    SET_GPR_U32(ctx, 31, 0x20C448u);
    ctx->pc = 0x20C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C440u;
    // 0x20c444: 0xae0203e8  sw          $v0, 0x3E8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277340u, 0x20C440u, 0x20C448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C448u;
label_20c448:
    // 0x20c448: 0x100001a6  b           . + 4 + (0x1A6 << 2)
    ctx->pc = 0x20C448u;
    {
        const bool branch_taken_0x20c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C448u;
        // 0x20c44c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c448) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C450u;
label_20c450:
    // 0x20c450: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C450u;
    {
        const bool branch_taken_0x20c450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C450u;
        // 0x20c454: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c450) {
            ctx->pc = 0x20C478u;
            goto label_20c478;
        }
    }
    ctx->pc = 0x20C458u;
    // 0x20c458: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20c45c: 0x8e050060  lw          $a1, 0x60($s0)
    ctx->pc = 0x20c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x20c460: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x20c460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x20c464: 0xc07eb8c  jal         func_1FAE30
    ctx->pc = 0x20C464u;
    SET_GPR_U32(ctx, 31, 0x20C46Cu);
    ctx->pc = 0x20C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C464u;
    // 0x20c468: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAE30u, 0x20C464u, 0x20C46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C46Cu;
label_20c46c:
    // 0x20c46c: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x20C46Cu;
    {
        const bool branch_taken_0x20c46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C46Cu;
        // 0x20c470: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c46c) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C474u;
    // 0x20c474: 0x0  nop
    ctx->pc = 0x20c474u;
    // NOP
label_20c478:
    // 0x20c478: 0x5462019a  bnel        $v1, $v0, . + 4 + (0x19A << 2)
    ctx->pc = 0x20C478u;
    {
        const bool branch_taken_0x20c478 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c478) {
            ctx->pc = 0x20C47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C478u;
            // 0x20c47c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C480u;
    // 0x20c480: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x20c480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x20c484: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x20c484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x20c488: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x20C488u;
    {
        const bool branch_taken_0x20c488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C488u;
        // 0x20c48c: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c488) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C490u;
label_20c490:
    // 0x20c490: 0x14c0006d  bnez        $a2, . + 4 + (0x6D << 2)
    ctx->pc = 0x20C490u;
    {
        const bool branch_taken_0x20c490 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C490u;
        // 0x20c494: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c490) {
            ctx->pc = 0x20C648u;
            goto label_20c648;
        }
    }
    ctx->pc = 0x20C498u;
    // 0x20c498: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C498u;
    {
        const bool branch_taken_0x20c498 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C498u;
        // 0x20c49c: 0x3a420009  xori        $v0, $s2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)9);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c498) {
            ctx->pc = 0x20C4A4u;
            goto label_20c4a4;
        }
    }
    ctx->pc = 0x20C4A0u;
    // 0x20c4a0: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x20c4a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_20c4a4:
    // 0x20c4a4: 0x1240006f  beqz        $s2, . + 4 + (0x6F << 2)
    ctx->pc = 0x20C4A4u;
    {
        const bool branch_taken_0x20c4a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4A4u;
        // 0x20c4a8: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4a4) {
            ctx->pc = 0x20C664u;
            goto label_20c664;
        }
    }
    ctx->pc = 0x20C4ACu;
    // 0x20c4ac: 0x125400da  beq         $s2, $s4, . + 4 + (0xDA << 2)
    ctx->pc = 0x20C4ACu;
    {
        const bool branch_taken_0x20c4ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x20C4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4ACu;
        // 0x20c4b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4ac) {
            ctx->pc = 0x20C818u;
            goto label_20c818;
        }
    }
    ctx->pc = 0x20C4B4u;
    // 0x20c4b4: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C4B4u;
    {
        const bool branch_taken_0x20c4b4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4B4u;
        // 0x20c4b8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4b4) {
            ctx->pc = 0x20C4E0u;
            goto label_20c4e0;
        }
    }
    ctx->pc = 0x20C4BCu;
    // 0x20c4bc: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c4c0: 0x50400188  beql        $v0, $zero, . + 4 + (0x188 << 2)
    ctx->pc = 0x20C4C0u;
    {
        const bool branch_taken_0x20c4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4c0) {
            ctx->pc = 0x20C4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C4C0u;
            // 0x20c4c4: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C4C8u;
    // 0x20c4c8: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C4C8u;
    SET_GPR_U32(ctx, 31, 0x20C4D0u);
    ctx->pc = 0x20C4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C4C8u;
    // 0x20c4cc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C4C8u, 0x20C4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4D0u;
label_20c4d0:
    // 0x20c4d0: 0xc07e6b4  jal         func_1F9AD0
    ctx->pc = 0x20C4D0u;
    SET_GPR_U32(ctx, 31, 0x20C4D8u);
    ctx->pc = 0x1F9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AD0u, 0x20C4D0u, 0x20C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C4D8u;
label_20c4d8:
    // 0x20c4d8: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x20C4D8u;
    {
        const bool branch_taken_0x20c4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4D8u;
        // 0x20c4dc: 0x9665003c  lhu         $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4d8) {
            ctx->pc = 0x20C870u;
            goto label_20c870;
        }
    }
    ctx->pc = 0x20C4E0u;
label_20c4e0:
    // 0x20c4e0: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C4E0u;
    {
        const bool branch_taken_0x20c4e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4E0u;
        // 0x20c4e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4e0) {
            ctx->pc = 0x20C558u;
            goto label_20c558;
        }
    }
    ctx->pc = 0x20C4E8u;
    // 0x20c4e8: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x20c4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x20c4ec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C4ECu;
    {
        const bool branch_taken_0x20c4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4ec) {
            ctx->pc = 0x20C4F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C4ECu;
            // 0x20c4f0: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C500u;
            goto label_20c500;
        }
    }
    ctx->pc = 0x20C4F4u;
    // 0x20c4f4: 0x8e0203e8  lw          $v0, 0x3E8($s0)
    ctx->pc = 0x20c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x20c4f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20C4F8u;
    {
        const bool branch_taken_0x20c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C4F8u;
        // 0x20c4fc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4f8) {
            ctx->pc = 0x20C510u;
            goto label_20c510;
        }
    }
    ctx->pc = 0x20C500u;
label_20c500:
    // 0x20c500: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C500u;
    {
        const bool branch_taken_0x20c500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C500u;
        // 0x20c504: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c500) {
            ctx->pc = 0x20C518u;
            goto label_20c518;
        }
    }
    ctx->pc = 0x20C508u;
    // 0x20c508: 0x8e0203e8  lw          $v0, 0x3E8($s0)
    ctx->pc = 0x20c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
    // 0x20c50c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c510:
    // 0x20c510: 0xae0203e8  sw          $v0, 0x3E8($s0)
    ctx->pc = 0x20c510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
    // 0x20c514: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x20c514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
label_20c518:
    // 0x20c518: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C518u;
    {
        const bool branch_taken_0x20c518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c518) {
            ctx->pc = 0x20C51Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C518u;
            // 0x20c51c: 0x8e0303e8  lw          $v1, 0x3E8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C52Cu;
            goto label_20c52c;
        }
    }
    ctx->pc = 0x20C520u;
    // 0x20c520: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C520u;
    SET_GPR_U32(ctx, 31, 0x20C528u);
    ctx->pc = 0x20C524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C520u;
    // 0x20c524: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C520u, 0x20C528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C528u;
label_20c528:
    // 0x20c528: 0x8e0303e8  lw          $v1, 0x3E8($s0)
    ctx->pc = 0x20c528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1000)));
label_20c52c:
    // 0x20c52c: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C52Cu;
    {
        const bool branch_taken_0x20c52c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C52Cu;
        // 0x20c530: 0x2862000b  slti        $v0, $v1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c52c) {
            ctx->pc = 0x20C540u;
            goto label_20c540;
        }
    }
    ctx->pc = 0x20C534u;
    // 0x20c534: 0x2462000b  addiu       $v0, $v1, 0xB
    ctx->pc = 0x20c534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 11));
    // 0x20c538: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x20C538u;
    {
        const bool branch_taken_0x20c538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C538u;
        // 0x20c53c: 0xae0203e8  sw          $v0, 0x3E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c538) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C540u;
label_20c540:
    // 0x20c540: 0x54400168  bnel        $v0, $zero, . + 4 + (0x168 << 2)
    ctx->pc = 0x20C540u;
    {
        const bool branch_taken_0x20c540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c540) {
            ctx->pc = 0x20C544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C540u;
            // 0x20c544: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C548u;
    // 0x20c548: 0x2462fff5  addiu       $v0, $v1, -0xB
    ctx->pc = 0x20c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967285));
    // 0x20c54c: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x20C54Cu;
    {
        const bool branch_taken_0x20c54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C54Cu;
        // 0x20c550: 0xae0203e8  sw          $v0, 0x3E8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c54c) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C554u;
    // 0x20c554: 0x0  nop
    ctx->pc = 0x20c554u;
    // NOP
label_20c558:
    // 0x20c558: 0x124200e9  beq         $s2, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x20C558u;
    {
        const bool branch_taken_0x20c558 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C558u;
        // 0x20c55c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c558) {
            ctx->pc = 0x20C900u;
            goto label_20c900;
        }
    }
    ctx->pc = 0x20C560u;
    // 0x20c560: 0x16420011  bne         $s2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20C560u;
    {
        const bool branch_taken_0x20c560 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C560u;
        // 0x20c564: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c560) {
            ctx->pc = 0x20C5A8u;
            goto label_20c5a8;
        }
    }
    ctx->pc = 0x20C568u;
    // 0x20c568: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x20c568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
    // 0x20c56c: 0x5040015d  beql        $v0, $zero, . + 4 + (0x15D << 2)
    ctx->pc = 0x20C56Cu;
    {
        const bool branch_taken_0x20c56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c56c) {
            ctx->pc = 0x20C570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C56Cu;
            // 0x20c570: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C574u;
    // 0x20c574: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C574u;
    SET_GPR_U32(ctx, 31, 0x20C57Cu);
    ctx->pc = 0x20C578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C574u;
    // 0x20c578: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C574u, 0x20C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C57Cu;
label_20c57c:
    // 0x20c57c: 0x8e0203f4  lw          $v0, 0x3F4($s0)
    ctx->pc = 0x20c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1012)));
    // 0x20c580: 0xa6000038  sh          $zero, 0x38($s0)
    ctx->pc = 0x20c580u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 56), (uint16_t)GPR_U32(ctx, 0));
    // 0x20c584: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c588: 0xc09d9ca  jal         func_276728
    ctx->pc = 0x20C588u;
    SET_GPR_U32(ctx, 31, 0x20C590u);
    ctx->pc = 0x20C58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C588u;
    // 0x20c58c: 0xae0203f4  sw          $v0, 0x3F4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 1012), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276728u, 0x20C588u, 0x20C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C590u;
label_20c590:
    // 0x20c590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c594: 0xc09dd36  jal         func_2774D8
    ctx->pc = 0x20C594u;
    SET_GPR_U32(ctx, 31, 0x20C59Cu);
    ctx->pc = 0x20C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C594u;
    // 0x20c598: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2774D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2774D8u, 0x20C594u, 0x20C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C59Cu;
label_20c59c:
    // 0x20c59c: 0x10000151  b           . + 4 + (0x151 << 2)
    ctx->pc = 0x20C59Cu;
    {
        const bool branch_taken_0x20c59c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C59Cu;
        // 0x20c5a0: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c59c) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C5A4u;
    // 0x20c5a4: 0x0  nop
    ctx->pc = 0x20c5a4u;
    // NOP
label_20c5a8:
    // 0x20c5a8: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C5A8u;
    {
        const bool branch_taken_0x20c5a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5A8u;
        // 0x20c5ac: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5a8) {
            ctx->pc = 0x20C5C8u;
            goto label_20c5c8;
        }
    }
    ctx->pc = 0x20C5B0u;
    // 0x20c5b0: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x20c5b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x20c5b4: 0x504000e4  beql        $v0, $zero, . + 4 + (0xE4 << 2)
    ctx->pc = 0x20C5B4u;
    {
        const bool branch_taken_0x20c5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5b4) {
            ctx->pc = 0x20C5B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C5B4u;
            // 0x20c5b8: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C948u;
            goto label_20c948;
        }
    }
    ctx->pc = 0x20C5BCu;
    // 0x20c5bc: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x20c5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x20c5c0: 0x100000e5  b           . + 4 + (0xE5 << 2)
    ctx->pc = 0x20C5C0u;
    {
        const bool branch_taken_0x20c5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C0u;
        // 0x20c5c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5c0) {
            ctx->pc = 0x20C958u;
            goto label_20c958;
        }
    }
    ctx->pc = 0x20C5C8u;
label_20c5c8:
    // 0x20c5c8: 0x124200f7  beq         $s2, $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x20C5C8u;
    {
        const bool branch_taken_0x20c5c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5C8u;
        // 0x20c5cc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5c8) {
            ctx->pc = 0x20C9A8u;
            goto label_20c9a8;
        }
    }
    ctx->pc = 0x20C5D0u;
    // 0x20c5d0: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x20C5D0u;
    {
        const bool branch_taken_0x20c5d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5D0u;
        // 0x20c5d4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5d0) {
            ctx->pc = 0x20C5F8u;
            goto label_20c5f8;
        }
    }
    ctx->pc = 0x20C5D8u;
    // 0x20c5d8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20c5dc: 0x14400106  bnez        $v0, . + 4 + (0x106 << 2)
    ctx->pc = 0x20C5DCu;
    {
        const bool branch_taken_0x20c5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5DCu;
        // 0x20c5e0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5dc) {
            ctx->pc = 0x20C9F8u;
            goto label_20c9f8;
        }
    }
    ctx->pc = 0x20C5E4u;
    // 0x20c5e4: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c5e8: 0x5040013e  beql        $v0, $zero, . + 4 + (0x13E << 2)
    ctx->pc = 0x20C5E8u;
    {
        const bool branch_taken_0x20c5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5e8) {
            ctx->pc = 0x20C5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C5E8u;
            // 0x20c5ec: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C5F0u;
    // 0x20c5f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20C5F0u;
    {
        const bool branch_taken_0x20c5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C5F0u;
        // 0x20c5f4: 0xae140020  sw          $s4, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5f0) {
            ctx->pc = 0x20C61Cu;
            goto label_20c61c;
        }
    }
    ctx->pc = 0x20C5F8u;
label_20c5f8:
    // 0x20c5f8: 0x5642013a  bnel        $s2, $v0, . + 4 + (0x13A << 2)
    ctx->pc = 0x20C5F8u;
    {
        const bool branch_taken_0x20c5f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c5f8) {
            ctx->pc = 0x20C5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C5F8u;
            // 0x20c5fc: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C600u;
    // 0x20c600: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20c600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x20c604: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20C604u;
    {
        const bool branch_taken_0x20c604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C604u;
        // 0x20c608: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c604) {
            ctx->pc = 0x20C630u;
            goto label_20c630;
        }
    }
    ctx->pc = 0x20C60Cu;
    // 0x20c60c: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c60cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c610: 0x50400134  beql        $v0, $zero, . + 4 + (0x134 << 2)
    ctx->pc = 0x20C610u;
    {
        const bool branch_taken_0x20c610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c610) {
            ctx->pc = 0x20C614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C610u;
            // 0x20c614: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C618u;
    // 0x20c618: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x20c618u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
label_20c61c:
    // 0x20c61c: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C61Cu;
    SET_GPR_U32(ctx, 31, 0x20C624u);
    ctx->pc = 0x20C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C61Cu;
    // 0x20c620: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C61Cu, 0x20C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C624u;
label_20c624:
    // 0x20c624: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x20C624u;
    {
        const bool branch_taken_0x20c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C624u;
        // 0x20c628: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c624) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C62Cu;
    // 0x20c62c: 0x0  nop
    ctx->pc = 0x20c62cu;
    // NOP
label_20c630:
    // 0x20c630: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c634: 0x504000fe  beql        $v0, $zero, . + 4 + (0xFE << 2)
    ctx->pc = 0x20C634u;
    {
        const bool branch_taken_0x20c634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c634) {
            ctx->pc = 0x20C638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C634u;
            // 0x20c638: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CA30u;
            goto label_20ca30;
        }
    }
    ctx->pc = 0x20C63Cu;
    // 0x20c63c: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x20C63Cu;
    {
        const bool branch_taken_0x20c63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C63Cu;
        // 0x20c640: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c63c) {
            ctx->pc = 0x20CA98u;
            goto label_20ca98;
        }
    }
    ctx->pc = 0x20C644u;
    // 0x20c644: 0x0  nop
    ctx->pc = 0x20c644u;
    // NOP
label_20c648:
    // 0x20c648: 0x14c30069  bne         $a2, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x20C648u;
    {
        const bool branch_taken_0x20c648 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x20C64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C648u;
        // 0x20c64c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c648) {
            ctx->pc = 0x20C7F0u;
            goto label_20c7f0;
        }
    }
    ctx->pc = 0x20C650u;
    // 0x20c650: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C650u;
    {
        const bool branch_taken_0x20c650 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C650u;
        // 0x20c654: 0x3a420007  xori        $v0, $s2, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c650) {
            ctx->pc = 0x20C65Cu;
            goto label_20c65c;
        }
    }
    ctx->pc = 0x20C658u;
    // 0x20c658: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x20c658u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_20c65c:
    // 0x20c65c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C65Cu;
    {
        const bool branch_taken_0x20c65c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c65c) {
            ctx->pc = 0x20C670u;
            goto label_20c670;
        }
    }
    ctx->pc = 0x20C664u;
label_20c664:
    // 0x20c664: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x20C664u;
    {
        const bool branch_taken_0x20c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C664u;
        // 0x20c668: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c664) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C66Cu;
    // 0x20c66c: 0x0  nop
    ctx->pc = 0x20c66cu;
    // NOP
label_20c670:
    // 0x20c670: 0x12430069  beq         $s2, $v1, . + 4 + (0x69 << 2)
    ctx->pc = 0x20C670u;
    {
        const bool branch_taken_0x20c670 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x20C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C670u;
        // 0x20c674: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c670) {
            ctx->pc = 0x20C818u;
            goto label_20c818;
        }
    }
    ctx->pc = 0x20C678u;
    // 0x20c678: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C678u;
    {
        const bool branch_taken_0x20c678 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C678u;
        // 0x20c67c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c678) {
            ctx->pc = 0x20C6A8u;
            goto label_20c6a8;
        }
    }
    ctx->pc = 0x20C680u;
    // 0x20c680: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c684: 0x50400117  beql        $v0, $zero, . + 4 + (0x117 << 2)
    ctx->pc = 0x20C684u;
    {
        const bool branch_taken_0x20c684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c684) {
            ctx->pc = 0x20C688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C684u;
            // 0x20c688: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C68Cu;
    // 0x20c68c: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C68Cu;
    SET_GPR_U32(ctx, 31, 0x20C694u);
    ctx->pc = 0x20C690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C68Cu;
    // 0x20c690: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C68Cu, 0x20C694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C694u;
label_20c694:
    // 0x20c694: 0xc07e6b4  jal         func_1F9AD0
    ctx->pc = 0x20C694u;
    SET_GPR_U32(ctx, 31, 0x20C69Cu);
    ctx->pc = 0x1F9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AD0u, 0x20C694u, 0x20C69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C69Cu;
label_20c69c:
    // 0x20c69c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x20C69Cu;
    {
        const bool branch_taken_0x20c69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C69Cu;
        // 0x20c6a0: 0x9665003c  lhu         $a1, 0x3C($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c69c) {
            ctx->pc = 0x20C870u;
            goto label_20c870;
        }
    }
    ctx->pc = 0x20C6A4u;
    // 0x20c6a4: 0x0  nop
    ctx->pc = 0x20c6a4u;
    // NOP
label_20c6a8:
    // 0x20c6a8: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C6A8u;
    {
        const bool branch_taken_0x20c6a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6A8u;
        // 0x20c6ac: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6a8) {
            ctx->pc = 0x20C720u;
            goto label_20c720;
        }
    }
    ctx->pc = 0x20C6B0u;
    // 0x20c6b0: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x20c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x20c6b4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C6B4u;
    {
        const bool branch_taken_0x20c6b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c6b4) {
            ctx->pc = 0x20C6B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C6B4u;
            // 0x20c6b8: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C6C8u;
            goto label_20c6c8;
        }
    }
    ctx->pc = 0x20C6BCu;
    // 0x20c6bc: 0x8e020400  lw          $v0, 0x400($s0)
    ctx->pc = 0x20c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    // 0x20c6c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20C6C0u;
    {
        const bool branch_taken_0x20c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6C0u;
        // 0x20c6c4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6c0) {
            ctx->pc = 0x20C6D8u;
            goto label_20c6d8;
        }
    }
    ctx->pc = 0x20C6C8u;
label_20c6c8:
    // 0x20c6c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C6C8u;
    {
        const bool branch_taken_0x20c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c6c8) {
            ctx->pc = 0x20C6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C6C8u;
            // 0x20c6cc: 0x8e030400  lw          $v1, 0x400($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C6E0u;
            goto label_20c6e0;
        }
    }
    ctx->pc = 0x20C6D0u;
    // 0x20c6d0: 0x8e020400  lw          $v0, 0x400($s0)
    ctx->pc = 0x20c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
    // 0x20c6d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c6d8:
    // 0x20c6d8: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x20c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x20c6dc: 0x8e030400  lw          $v1, 0x400($s0)
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1024)));
label_20c6e0:
    // 0x20c6e0: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20C6E0u;
    {
        const bool branch_taken_0x20c6e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x20c6e0) {
            ctx->pc = 0x20C6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C6E0u;
            // 0x20c6e4: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C6F0u;
            goto label_20c6f0;
        }
    }
    ctx->pc = 0x20C6E8u;
    // 0x20c6e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20C6E8u;
    {
        const bool branch_taken_0x20c6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6E8u;
        // 0x20c6ec: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6e8) {
            ctx->pc = 0x20C6FCu;
            goto label_20c6fc;
        }
    }
    ctx->pc = 0x20C6F0u;
label_20c6f0:
    // 0x20c6f0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C6F0u;
    {
        const bool branch_taken_0x20c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C6F0u;
        // 0x20c6f4: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6f0) {
            ctx->pc = 0x20C704u;
            goto label_20c704;
        }
    }
    ctx->pc = 0x20C6F8u;
    // 0x20c6f8: 0x2462fffb  addiu       $v0, $v1, -0x5
    ctx->pc = 0x20c6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
label_20c6fc:
    // 0x20c6fc: 0xae020400  sw          $v0, 0x400($s0)
    ctx->pc = 0x20c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 2));
    // 0x20c700: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x20c700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
label_20c704:
    // 0x20c704: 0x504000f7  beql        $v0, $zero, . + 4 + (0xF7 << 2)
    ctx->pc = 0x20C704u;
    {
        const bool branch_taken_0x20c704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c704) {
            ctx->pc = 0x20C708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C704u;
            // 0x20c708: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C70Cu;
    // 0x20c70c: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C70Cu;
    SET_GPR_U32(ctx, 31, 0x20C714u);
    ctx->pc = 0x20C710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C70Cu;
    // 0x20c710: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C70Cu, 0x20C714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C714u;
label_20c714:
    // 0x20c714: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x20C714u;
    {
        const bool branch_taken_0x20c714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C714u;
        // 0x20c718: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c714) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C71Cu;
    // 0x20c71c: 0x0  nop
    ctx->pc = 0x20c71cu;
    // NOP
label_20c720:
    // 0x20c720: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20C720u;
    {
        const bool branch_taken_0x20c720 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C720u;
        // 0x20c724: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c720) {
            ctx->pc = 0x20C740u;
            goto label_20c740;
        }
    }
    ctx->pc = 0x20C728u;
    // 0x20c728: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x20c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x20c72c: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x20C72Cu;
    {
        const bool branch_taken_0x20c72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c72c) {
            ctx->pc = 0x20C730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C72Cu;
            // 0x20c730: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C948u;
            goto label_20c948;
        }
    }
    ctx->pc = 0x20C734u;
    // 0x20c734: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x20c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x20c738: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x20C738u;
    {
        const bool branch_taken_0x20c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C738u;
        // 0x20c73c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c738) {
            ctx->pc = 0x20C958u;
            goto label_20c958;
        }
    }
    ctx->pc = 0x20C740u;
label_20c740:
    // 0x20c740: 0x12420099  beq         $s2, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x20C740u;
    {
        const bool branch_taken_0x20c740 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C740u;
        // 0x20c744: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c740) {
            ctx->pc = 0x20C9A8u;
            goto label_20c9a8;
        }
    }
    ctx->pc = 0x20C748u;
    // 0x20c748: 0x16420019  bne         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x20C748u;
    {
        const bool branch_taken_0x20c748 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C748u;
        // 0x20c74c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c748) {
            ctx->pc = 0x20C7B0u;
            goto label_20c7b0;
        }
    }
    ctx->pc = 0x20C750u;
    // 0x20c750: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20c754: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C754u;
    {
        const bool branch_taken_0x20c754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C754u;
        // 0x20c758: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c754) {
            ctx->pc = 0x20C770u;
            goto label_20c770;
        }
    }
    ctx->pc = 0x20C75Cu;
    // 0x20c75c: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c760: 0x504000e0  beql        $v0, $zero, . + 4 + (0xE0 << 2)
    ctx->pc = 0x20C760u;
    {
        const bool branch_taken_0x20c760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c760) {
            ctx->pc = 0x20C764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C760u;
            // 0x20c764: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C768u;
    // 0x20c768: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x20C768u;
    {
        const bool branch_taken_0x20c768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C768u;
        // 0x20c76c: 0xae030020  sw          $v1, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c768) {
            ctx->pc = 0x20CA74u;
            goto label_20ca74;
        }
    }
    ctx->pc = 0x20C770u;
label_20c770:
    // 0x20c770: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c774: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x20C774u;
    {
        const bool branch_taken_0x20c774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C774u;
        // 0x20c778: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c774) {
            ctx->pc = 0x20CA30u;
            goto label_20ca30;
        }
    }
    ctx->pc = 0x20C77Cu;
    // 0x20c77c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20c780: 0x104000cd  beqz        $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x20C780u;
    {
        const bool branch_taken_0x20c780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C780u;
        // 0x20c784: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c780) {
            ctx->pc = 0x20CAB8u;
            goto label_20cab8;
        }
    }
    ctx->pc = 0x20C788u;
    // 0x20c788: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C788u;
    SET_GPR_U32(ctx, 31, 0x20C790u);
    ctx->pc = 0x20C78Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C788u;
    // 0x20c78c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C788u, 0x20C790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C790u;
label_20c790:
    // 0x20c790: 0x9662003c  lhu         $v0, 0x3C($s3)
    ctx->pc = 0x20c790u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x20c794: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c798: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20c798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20c79c: 0xc084cfe  jal         func_2133F8
    ctx->pc = 0x20C79Cu;
    SET_GPR_U32(ctx, 31, 0x20C7A4u);
    ctx->pc = 0x20C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C79Cu;
    // 0x20c7a0: 0x452804  sllv        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2133F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2133F8u, 0x20C79Cu, 0x20C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C7A4u;
label_20c7a4:
    // 0x20c7a4: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x20C7A4u;
    {
        const bool branch_taken_0x20c7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7A4u;
        // 0x20c7a8: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7a4) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C7ACu;
    // 0x20c7ac: 0x0  nop
    ctx->pc = 0x20c7acu;
    // NOP
label_20c7b0:
    // 0x20c7b0: 0x564200cc  bnel        $s2, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x20C7B0u;
    {
        const bool branch_taken_0x20c7b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c7b0) {
            ctx->pc = 0x20C7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7B0u;
            // 0x20c7b4: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C7B8u;
    // 0x20c7b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x20c7bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C7BCu;
    {
        const bool branch_taken_0x20c7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7BCu;
        // 0x20c7c0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7bc) {
            ctx->pc = 0x20C7D8u;
            goto label_20c7d8;
        }
    }
    ctx->pc = 0x20C7C4u;
    // 0x20c7c4: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c7c8: 0x504000c6  beql        $v0, $zero, . + 4 + (0xC6 << 2)
    ctx->pc = 0x20C7C8u;
    {
        const bool branch_taken_0x20c7c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7c8) {
            ctx->pc = 0x20C7CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7C8u;
            // 0x20c7cc: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C7D0u;
    // 0x20c7d0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x20C7D0u;
    {
        const bool branch_taken_0x20c7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7D0u;
        // 0x20c7d4: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7d0) {
            ctx->pc = 0x20CA74u;
            goto label_20ca74;
        }
    }
    ctx->pc = 0x20C7D8u;
label_20c7d8:
    // 0x20c7d8: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c7dc: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
    ctx->pc = 0x20C7DCu;
    {
        const bool branch_taken_0x20c7dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c7dc) {
            ctx->pc = 0x20C7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7DCu;
            // 0x20c7e0: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CA30u;
            goto label_20ca30;
        }
    }
    ctx->pc = 0x20C7E4u;
    // 0x20c7e4: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x20C7E4u;
    {
        const bool branch_taken_0x20c7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7E4u;
        // 0x20c7e8: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7e4) {
            ctx->pc = 0x20CA98u;
            goto label_20ca98;
        }
    }
    ctx->pc = 0x20C7ECu;
    // 0x20c7ec: 0x0  nop
    ctx->pc = 0x20c7ecu;
    // NOP
label_20c7f0:
    // 0x20c7f0: 0x54c200bc  bnel        $a2, $v0, . + 4 + (0xBC << 2)
    ctx->pc = 0x20C7F0u;
    {
        const bool branch_taken_0x20c7f0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c7f0) {
            ctx->pc = 0x20C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C7F0u;
            // 0x20c7f4: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C7F8u;
    // 0x20c7f8: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x20C7F8u;
    {
        const bool branch_taken_0x20c7f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C7F8u;
        // 0x20c7fc: 0x3a420008  xori        $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7f8) {
            ctx->pc = 0x20C804u;
            goto label_20c804;
        }
    }
    ctx->pc = 0x20C800u;
    // 0x20c800: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x20c800u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
label_20c804:
    // 0x20c804: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20C804u;
    {
        const bool branch_taken_0x20c804 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c804) {
            ctx->pc = 0x20C808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C804u;
            // 0x20c808: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C80Cu;
            goto label_20c80c;
        }
    }
    ctx->pc = 0x20C80Cu;
label_20c80c:
    // 0x20c80c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x20c80cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c810: 0x1654000d  bne         $s2, $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x20C810u;
    {
        const bool branch_taken_0x20c810 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x20c810) {
            ctx->pc = 0x20C848u;
            goto label_20c848;
        }
    }
    ctx->pc = 0x20C818u;
label_20c818:
    // 0x20c818: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c81c: 0x504000b1  beql        $v0, $zero, . + 4 + (0xB1 << 2)
    ctx->pc = 0x20C81Cu;
    {
        const bool branch_taken_0x20c81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c81c) {
            ctx->pc = 0x20C820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C81Cu;
            // 0x20c820: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C824u;
    // 0x20c824: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C824u;
    SET_GPR_U32(ctx, 31, 0x20C82Cu);
    ctx->pc = 0x20C828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C824u;
    // 0x20c828: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C824u, 0x20C82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C82Cu;
label_20c82c:
    // 0x20c82c: 0xc07e252  jal         func_1F8948
    ctx->pc = 0x20C82Cu;
    SET_GPR_U32(ctx, 31, 0x20C834u);
    ctx->pc = 0x20C830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C82Cu;
    // 0x20c830: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8948u, 0x20C82Cu, 0x20C834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C834u;
label_20c834:
    // 0x20c834: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20c834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c838: 0xc08303c  jal         func_20C0F0
    ctx->pc = 0x20C838u;
    SET_GPR_U32(ctx, 31, 0x20C840u);
    ctx->pc = 0x20C83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C838u;
    // 0x20c83c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C0F0u, 0x20C838u, 0x20C840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C840u;
label_20c840:
    // 0x20c840: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x20C840u;
    {
        const bool branch_taken_0x20c840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C840u;
        // 0x20c844: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c840) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C848u;
label_20c848:
    // 0x20c848: 0x1646000d  bne         $s2, $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x20C848u;
    {
        const bool branch_taken_0x20c848 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x20C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C848u;
        // 0x20c84c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c848) {
            ctx->pc = 0x20C880u;
            goto label_20c880;
        }
    }
    ctx->pc = 0x20C850u;
    // 0x20c850: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c854: 0x504000a3  beql        $v0, $zero, . + 4 + (0xA3 << 2)
    ctx->pc = 0x20C854u;
    {
        const bool branch_taken_0x20c854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c854) {
            ctx->pc = 0x20C858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C854u;
            // 0x20c858: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C85Cu;
    // 0x20c85c: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C85Cu;
    SET_GPR_U32(ctx, 31, 0x20C864u);
    ctx->pc = 0x20C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C85Cu;
    // 0x20c860: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C85Cu, 0x20C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C864u;
label_20c864:
    // 0x20c864: 0xc07e6b4  jal         func_1F9AD0
    ctx->pc = 0x20C864u;
    SET_GPR_U32(ctx, 31, 0x20C86Cu);
    ctx->pc = 0x1F9AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AD0u, 0x20C864u, 0x20C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C86Cu;
label_20c86c:
    // 0x20c86c: 0x96a5003c  lhu         $a1, 0x3C($s5)
    ctx->pc = 0x20c86cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 60)));
label_20c870:
    // 0x20c870: 0xc07e258  jal         func_1F8960
    ctx->pc = 0x20C870u;
    SET_GPR_U32(ctx, 31, 0x20C878u);
    ctx->pc = 0x20C874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C870u;
    // 0x20c874: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8960u, 0x20C870u, 0x20C878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C878u;
label_20c878:
    // 0x20c878: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x20C878u;
    {
        const bool branch_taken_0x20c878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C878u;
        // 0x20c87c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c878) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C880u;
label_20c880:
    // 0x20c880: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C880u;
    {
        const bool branch_taken_0x20c880 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C880u;
        // 0x20c884: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c880) {
            ctx->pc = 0x20C8F8u;
            goto label_20c8f8;
        }
    }
    ctx->pc = 0x20C888u;
    // 0x20c888: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x20c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x20c88c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C88Cu;
    {
        const bool branch_taken_0x20c88c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c88c) {
            ctx->pc = 0x20C890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C88Cu;
            // 0x20c890: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C8A0u;
            goto label_20c8a0;
        }
    }
    ctx->pc = 0x20C894u;
    // 0x20c894: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x20c894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x20c898: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20C898u;
    {
        const bool branch_taken_0x20c898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C898u;
        // 0x20c89c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c898) {
            ctx->pc = 0x20C8B0u;
            goto label_20c8b0;
        }
    }
    ctx->pc = 0x20C8A0u;
label_20c8a0:
    // 0x20c8a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C8A0u;
    {
        const bool branch_taken_0x20c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8A0u;
        // 0x20c8a4: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8a0) {
            ctx->pc = 0x20C8B8u;
            goto label_20c8b8;
        }
    }
    ctx->pc = 0x20C8A8u;
    // 0x20c8a8: 0x8e020404  lw          $v0, 0x404($s0)
    ctx->pc = 0x20c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x20c8ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c8b0:
    // 0x20c8b0: 0xae020404  sw          $v0, 0x404($s0)
    ctx->pc = 0x20c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 2));
    // 0x20c8b4: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x20c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
label_20c8b8:
    // 0x20c8b8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C8B8u;
    {
        const bool branch_taken_0x20c8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c8b8) {
            ctx->pc = 0x20C8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C8B8u;
            // 0x20c8bc: 0x8e030404  lw          $v1, 0x404($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C8CCu;
            goto label_20c8cc;
        }
    }
    ctx->pc = 0x20C8C0u;
    // 0x20c8c0: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C8C0u;
    SET_GPR_U32(ctx, 31, 0x20C8C8u);
    ctx->pc = 0x20C8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8C0u;
    // 0x20c8c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C8C0u, 0x20C8C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8C8u;
label_20c8c8:
    // 0x20c8c8: 0x8e030404  lw          $v1, 0x404($s0)
    ctx->pc = 0x20c8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
label_20c8cc:
    // 0x20c8cc: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C8CCu;
    {
        const bool branch_taken_0x20c8cc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8CCu;
        // 0x20c8d0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8cc) {
            ctx->pc = 0x20C8E0u;
            goto label_20c8e0;
        }
    }
    ctx->pc = 0x20C8D4u;
    // 0x20c8d4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x20c8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x20c8d8: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x20C8D8u;
    {
        const bool branch_taken_0x20c8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8D8u;
        // 0x20c8dc: 0xae020404  sw          $v0, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8d8) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C8E0u;
label_20c8e0:
    // 0x20c8e0: 0x54400080  bnel        $v0, $zero, . + 4 + (0x80 << 2)
    ctx->pc = 0x20C8E0u;
    {
        const bool branch_taken_0x20c8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c8e0) {
            ctx->pc = 0x20C8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C8E0u;
            // 0x20c8e4: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C8E8u;
    // 0x20c8e8: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x20c8ec: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x20C8ECu;
    {
        const bool branch_taken_0x20c8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8ECu;
        // 0x20c8f0: 0xae020404  sw          $v0, 0x404($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8ec) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C8F4u;
    // 0x20c8f4: 0x0  nop
    ctx->pc = 0x20c8f4u;
    // NOP
label_20c8f8:
    // 0x20c8f8: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C8F8u;
    {
        const bool branch_taken_0x20c8f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8F8u;
        // 0x20c8fc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c8f8) {
            ctx->pc = 0x20C928u;
            goto label_20c928;
        }
    }
    ctx->pc = 0x20C900u;
label_20c900:
    // 0x20c900: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x20c900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
    // 0x20c904: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x20C904u;
    {
        const bool branch_taken_0x20c904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c904) {
            ctx->pc = 0x20C908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C904u;
            // 0x20c908: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C90Cu;
    // 0x20c90c: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C90Cu;
    SET_GPR_U32(ctx, 31, 0x20C914u);
    ctx->pc = 0x20C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C90Cu;
    // 0x20c910: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C90Cu, 0x20C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C914u;
label_20c914:
    // 0x20c914: 0x8e0203f0  lw          $v0, 0x3F0($s0)
    ctx->pc = 0x20c914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1008)));
    // 0x20c918: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c91c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x20C91Cu;
    {
        const bool branch_taken_0x20c91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C91Cu;
        // 0x20c920: 0xae0203f0  sw          $v0, 0x3F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c91c) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C924u;
    // 0x20c924: 0x0  nop
    ctx->pc = 0x20c924u;
    // NOP
label_20c928:
    // 0x20c928: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C928u;
    {
        const bool branch_taken_0x20c928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C928u;
        // 0x20c92c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c928) {
            ctx->pc = 0x20C9A0u;
            goto label_20c9a0;
        }
    }
    ctx->pc = 0x20C930u;
    // 0x20c930: 0x32228000  andi        $v0, $s1, 0x8000
    ctx->pc = 0x20c930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)32768);
    // 0x20c934: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C934u;
    {
        const bool branch_taken_0x20c934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c934) {
            ctx->pc = 0x20C938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C934u;
            // 0x20c938: 0x32222000  andi        $v0, $s1, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C948u;
            goto label_20c948;
        }
    }
    ctx->pc = 0x20C93Cu;
    // 0x20c93c: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x20c93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x20c940: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20C940u;
    {
        const bool branch_taken_0x20c940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C940u;
        // 0x20c944: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c940) {
            ctx->pc = 0x20C958u;
            goto label_20c958;
        }
    }
    ctx->pc = 0x20C948u;
label_20c948:
    // 0x20c948: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20C948u;
    {
        const bool branch_taken_0x20c948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C948u;
        // 0x20c94c: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c948) {
            ctx->pc = 0x20C960u;
            goto label_20c960;
        }
    }
    ctx->pc = 0x20C950u;
    // 0x20c950: 0x8e0203f8  lw          $v0, 0x3F8($s0)
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
    // 0x20c954: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20c954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20c958:
    // 0x20c958: 0xae0203f8  sw          $v0, 0x3F8($s0)
    ctx->pc = 0x20c958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 2));
    // 0x20c95c: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x20c95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
label_20c960:
    // 0x20c960: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C960u;
    {
        const bool branch_taken_0x20c960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c960) {
            ctx->pc = 0x20C964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C960u;
            // 0x20c964: 0x8e0303f8  lw          $v1, 0x3F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20C974u;
            goto label_20c974;
        }
    }
    ctx->pc = 0x20C968u;
    // 0x20c968: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C968u;
    SET_GPR_U32(ctx, 31, 0x20C970u);
    ctx->pc = 0x20C96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C968u;
    // 0x20c96c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C968u, 0x20C970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C970u;
label_20c970:
    // 0x20c970: 0x8e0303f8  lw          $v1, 0x3F8($s0)
    ctx->pc = 0x20c970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1016)));
label_20c974:
    // 0x20c974: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20C974u;
    {
        const bool branch_taken_0x20c974 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C974u;
        // 0x20c978: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c974) {
            ctx->pc = 0x20C988u;
            goto label_20c988;
        }
    }
    ctx->pc = 0x20C97Cu;
    // 0x20c97c: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x20c97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x20c980: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x20C980u;
    {
        const bool branch_taken_0x20c980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C980u;
        // 0x20c984: 0xae0203f8  sw          $v0, 0x3F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c980) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C988u;
label_20c988:
    // 0x20c988: 0x54400056  bnel        $v0, $zero, . + 4 + (0x56 << 2)
    ctx->pc = 0x20C988u;
    {
        const bool branch_taken_0x20c988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c988) {
            ctx->pc = 0x20C98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C988u;
            // 0x20c98c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C990u;
    // 0x20c990: 0x2462fffd  addiu       $v0, $v1, -0x3
    ctx->pc = 0x20c990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x20c994: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x20C994u;
    {
        const bool branch_taken_0x20c994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C994u;
        // 0x20c998: 0xae0203f8  sw          $v0, 0x3F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c994) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C99Cu;
    // 0x20c99c: 0x0  nop
    ctx->pc = 0x20c99cu;
    // NOP
label_20c9a0:
    // 0x20c9a0: 0x1642000b  bne         $s2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20C9A0u;
    {
        const bool branch_taken_0x20c9a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9A0u;
        // 0x20c9a4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9a0) {
            ctx->pc = 0x20C9D0u;
            goto label_20c9d0;
        }
    }
    ctx->pc = 0x20C9A8u;
label_20c9a8:
    // 0x20c9a8: 0x3222a000  andi        $v0, $s1, 0xA000
    ctx->pc = 0x20c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
    // 0x20c9ac: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x20C9ACu;
    {
        const bool branch_taken_0x20c9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9ACu;
        // 0x20c9b0: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9ac) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C9B4u;
    // 0x20c9b4: 0xc092940  jal         func_24A500
    ctx->pc = 0x20C9B4u;
    SET_GPR_U32(ctx, 31, 0x20C9BCu);
    ctx->pc = 0x20C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C9B4u;
    // 0x20c9b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20C9B4u, 0x20C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C9BCu;
label_20c9bc:
    // 0x20c9bc: 0x8e0203fc  lw          $v0, 0x3FC($s0)
    ctx->pc = 0x20c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1020)));
    // 0x20c9c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20c9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20c9c4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x20C9C4u;
    {
        const bool branch_taken_0x20c9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9C4u;
        // 0x20c9c8: 0xae0203fc  sw          $v0, 0x3FC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1020), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9c4) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20C9CCu;
    // 0x20c9cc: 0x0  nop
    ctx->pc = 0x20c9ccu;
    // NOP
label_20c9d0:
    // 0x20c9d0: 0x1642001f  bne         $s2, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x20C9D0u;
    {
        const bool branch_taken_0x20c9d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9D0u;
        // 0x20c9d4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9d0) {
            ctx->pc = 0x20CA50u;
            goto label_20ca50;
        }
    }
    ctx->pc = 0x20C9D8u;
    // 0x20c9d8: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x20c9dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20C9DCu;
    {
        const bool branch_taken_0x20c9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9DCu;
        // 0x20c9e0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9dc) {
            ctx->pc = 0x20C9F8u;
            goto label_20c9f8;
        }
    }
    ctx->pc = 0x20C9E4u;
    // 0x20c9e4: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c9e8: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x20C9E8u;
    {
        const bool branch_taken_0x20c9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c9e8) {
            ctx->pc = 0x20C9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20C9E8u;
            // 0x20c9ec: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20C9F0u;
    // 0x20c9f0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x20C9F0u;
    {
        const bool branch_taken_0x20c9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9F0u;
        // 0x20c9f4: 0xae140020  sw          $s4, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9f0) {
            ctx->pc = 0x20CA74u;
            goto label_20ca74;
        }
    }
    ctx->pc = 0x20C9F8u;
label_20c9f8:
    // 0x20c9f8: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20c9f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20c9fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20C9FCu;
    {
        const bool branch_taken_0x20c9fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9FCu;
        // 0x20ca00: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c9fc) {
            ctx->pc = 0x20CA30u;
            goto label_20ca30;
        }
    }
    ctx->pc = 0x20CA04u;
    // 0x20ca04: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20ca08: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20CA08u;
    {
        const bool branch_taken_0x20ca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA08u;
        // 0x20ca0c: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca08) {
            ctx->pc = 0x20CAB8u;
            goto label_20cab8;
        }
    }
    ctx->pc = 0x20CA10u;
    // 0x20ca10: 0xc092940  jal         func_24A500
    ctx->pc = 0x20CA10u;
    SET_GPR_U32(ctx, 31, 0x20CA18u);
    ctx->pc = 0x20CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA10u;
    // 0x20ca14: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20CA10u, 0x20CA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA18u;
label_20ca18:
    // 0x20ca18: 0x9665003c  lhu         $a1, 0x3C($s3)
    ctx->pc = 0x20ca18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x20ca1c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x20ca1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x20ca20: 0xc084cfe  jal         func_2133F8
    ctx->pc = 0x20CA20u;
    SET_GPR_U32(ctx, 31, 0x20CA28u);
    ctx->pc = 0x20CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA20u;
    // 0x20ca24: 0xb42804  sllv        $a1, $s4, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 5) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2133F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2133F8u, 0x20CA20u, 0x20CA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA28u;
label_20ca28:
    // 0x20ca28: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x20CA28u;
    {
        const bool branch_taken_0x20ca28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA28u;
        // 0x20ca2c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca28) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CA30u;
label_20ca30:
    // 0x20ca30: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20CA30u;
    {
        const bool branch_taken_0x20ca30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA30u;
        // 0x20ca34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca30) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20CA38u;
    // 0x20ca38: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20ca3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20ca3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20ca40: 0xc092940  jal         func_24A500
    ctx->pc = 0x20CA40u;
    SET_GPR_U32(ctx, 31, 0x20CA48u);
    ctx->pc = 0x20CA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA40u;
    // 0x20ca44: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20CA40u, 0x20CA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA48u;
label_20ca48:
    // 0x20ca48: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x20CA48u;
    {
        const bool branch_taken_0x20ca48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA48u;
        // 0x20ca4c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca48) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CA50u;
label_20ca50:
    // 0x20ca50: 0x56420024  bnel        $s2, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x20CA50u;
    {
        const bool branch_taken_0x20ca50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x20ca50) {
            ctx->pc = 0x20CA54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CA50u;
            // 0x20ca54: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CA58u;
    // 0x20ca58: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x20ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x20ca5c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20CA5Cu;
    {
        const bool branch_taken_0x20ca5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20CA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA5Cu;
        // 0x20ca60: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca5c) {
            ctx->pc = 0x20CA88u;
            goto label_20ca88;
        }
    }
    ctx->pc = 0x20CA64u;
    // 0x20ca64: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20ca64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20ca68: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x20CA68u;
    {
        const bool branch_taken_0x20ca68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ca68) {
            ctx->pc = 0x20CA6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20CA68u;
            // 0x20ca6c: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CA70u;
    // 0x20ca70: 0xae140024  sw          $s4, 0x24($s0)
    ctx->pc = 0x20ca70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 20));
label_20ca74:
    // 0x20ca74: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x20ca74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20ca78: 0xc092940  jal         func_24A500
    ctx->pc = 0x20CA78u;
    SET_GPR_U32(ctx, 31, 0x20CA80u);
    ctx->pc = 0x20CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CA78u;
    // 0x20ca7c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20CA78u, 0x20CA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CA80u;
label_20ca80:
    // 0x20ca80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x20CA80u;
    {
        const bool branch_taken_0x20ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA80u;
        // 0x20ca84: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca80) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CA88u;
label_20ca88:
    // 0x20ca88: 0x30820060  andi        $v0, $a0, 0x60
    ctx->pc = 0x20ca88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)96);
    // 0x20ca8c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x20CA8Cu;
    {
        const bool branch_taken_0x20ca8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA8Cu;
        // 0x20ca90: 0x3222a000  andi        $v0, $s1, 0xA000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)40960);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca8c) {
            ctx->pc = 0x20CAC8u;
            goto label_20cac8;
        }
    }
    ctx->pc = 0x20CA94u;
    // 0x20ca94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_20ca98:
    // 0x20ca98: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20CA98u;
    {
        const bool branch_taken_0x20ca98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CA98u;
        // 0x20ca9c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ca98) {
            ctx->pc = 0x20CAB8u;
            goto label_20cab8;
        }
    }
    ctx->pc = 0x20CAA0u;
    // 0x20caa0: 0xc092940  jal         func_24A500
    ctx->pc = 0x20CAA0u;
    SET_GPR_U32(ctx, 31, 0x20CAA8u);
    ctx->pc = 0x20CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAA0u;
    // 0x20caa4: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20CAA0u, 0x20CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAA8u;
label_20caa8:
    // 0x20caa8: 0xc084ec2  jal         func_213B08
    ctx->pc = 0x20CAA8u;
    SET_GPR_U32(ctx, 31, 0x20CAB0u);
    ctx->pc = 0x213B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x213B08u, 0x20CAA8u, 0x20CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAB0u;
label_20cab0:
    // 0x20cab0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x20CAB0u;
    {
        const bool branch_taken_0x20cab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAB0u;
        // 0x20cab4: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cab0) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CAB8u;
label_20cab8:
    // 0x20cab8: 0xc092940  jal         func_24A500
    ctx->pc = 0x20CAB8u;
    SET_GPR_U32(ctx, 31, 0x20CAC0u);
    ctx->pc = 0x20CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAB8u;
    // 0x20cabc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20CAB8u, 0x20CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAC0u;
label_20cac0:
    // 0x20cac0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20CAC0u;
    {
        const bool branch_taken_0x20cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAC0u;
        // 0x20cac4: 0xae120008  sw          $s2, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cac0) {
            ctx->pc = 0x20CAE4u;
            goto label_20cae4;
        }
    }
    ctx->pc = 0x20CAC8u;
label_20cac8:
    // 0x20cac8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20CAC8u;
    {
        const bool branch_taken_0x20cac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20CACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CAC8u;
        // 0x20cacc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20cac8) {
            ctx->pc = 0x20CAE0u;
            goto label_20cae0;
        }
    }
    ctx->pc = 0x20CAD0u;
    // 0x20cad0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x20cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cad4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x20cad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x20cad8: 0xc092940  jal         func_24A500
    ctx->pc = 0x20CAD8u;
    SET_GPR_U32(ctx, 31, 0x20CAE0u);
    ctx->pc = 0x20CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20CAD8u;
    // 0x20cadc: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x20CAD8u, 0x20CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20CAE0u;
label_20cae0:
    // 0x20cae0: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x20cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_20cae4:
    // 0x20cae4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20cae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20cae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20cae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20caec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20caecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20caf0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x20caf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20caf4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20caf4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20caf8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x20caf8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20cafc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x20cafcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cb00: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20cb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20cb04: 0x3e00008  jr          $ra
    ctx->pc = 0x20CB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20CB04u;
        // 0x20cb08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20CB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20CB0Cu;
    // 0x20cb0c: 0x0  nop
    ctx->pc = 0x20cb0cu;
    // NOP
    ctx->pc = 0x20cb10u;
}
