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

// Function: sub_00297548
// Address: 0x297548 - 0x297770
void sub_00297548_0x297548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00297548_0x297548");
#endif

    switch (ctx->pc) {
        case 0x29758cu: goto label_29758c;
        case 0x2975a8u: goto label_2975a8;
        case 0x2975d0u: goto label_2975d0;
        case 0x297610u: goto label_297610;
        default: break;
    }

    ctx->pc = 0x297548u;

    // 0x297548: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x297548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29754c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x29754cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x297550: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x297550u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297554: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x297554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x297558: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x297558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29755c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x29755cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x297560: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x297560u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297564: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x297564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x297568: 0x12000079  beqz        $s0, . + 4 + (0x79 << 2)
    ctx->pc = 0x297568u;
    {
        const bool branch_taken_0x297568 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297568u;
        // 0x29756c: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297568) {
            ctx->pc = 0x297750u;
            goto label_297750;
        }
    }
    ctx->pc = 0x297570u;
    // 0x297570: 0x92110080  lbu         $s1, 0x80($s0)
    ctx->pc = 0x297570u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x297574: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x297574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297578: 0x56220076  bnel        $s1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x297578u;
    {
        const bool branch_taken_0x297578 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x297578) {
            ctx->pc = 0x29757Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297578u;
            // 0x29757c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297754u;
            goto label_297754;
        }
    }
    ctx->pc = 0x297580u;
    // 0x297580: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297584: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x297584u;
    SET_GPR_U32(ctx, 31, 0x29758Cu);
    ctx->pc = 0x297588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297584u;
    // 0x297588: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x297584u, 0x29758Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29758Cu;
label_29758c:
    // 0x29758c: 0x3c0143a0  lui         $at, 0x43A0
    ctx->pc = 0x29758cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17312 << 16));
    // 0x297590: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x297590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297598: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x297598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29759c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29759cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2975a0: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2975A0u;
    SET_GPR_U32(ctx, 31, 0x2975A8u);
    ctx->pc = 0x2975A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975A0u;
    // 0x2975a4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2975A0u, 0x2975A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975A8u;
label_2975a8:
    // 0x2975a8: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x2975a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x2975ac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2975acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2975b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2975b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2975b4: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x2975b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x2975b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2975b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2975bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2975bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2975c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2975c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2975c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2975c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2975c8: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2975C8u;
    SET_GPR_U32(ctx, 31, 0x2975D0u);
    ctx->pc = 0x2975CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2975C8u;
    // 0x2975cc: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2975C8u, 0x2975D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2975D0u;
label_2975d0:
    // 0x2975d0: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x2975d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2975d4: 0x10710005  beq         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2975D4u;
    {
        const bool branch_taken_0x2975d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2975D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2975D4u;
        // 0x2975d8: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2975d4) {
            ctx->pc = 0x2975ECu;
            goto label_2975ec;
        }
    }
    ctx->pc = 0x2975DCu;
    // 0x2975dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2975dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2975e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2975e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2975e4: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2975E4u;
    {
        const bool branch_taken_0x2975e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2975e4) {
            ctx->pc = 0x2975E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2975E4u;
            // 0x2975e8: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2975F4u;
            goto label_2975f4;
        }
    }
    ctx->pc = 0x2975ECu;
label_2975ec:
    // 0x2975ec: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x2975ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2975f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2975f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2975f4:
    // 0x2975f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2975f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2975f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2975f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2975fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2975fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297600: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x297600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x297604: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297604u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297608: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x297608u;
    SET_GPR_U32(ctx, 31, 0x297610u);
    ctx->pc = 0x29760Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297608u;
    // 0x29760c: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x297608u, 0x297610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297610u;
label_297610:
    // 0x297610: 0x92030080  lbu         $v1, 0x80($s0)
    ctx->pc = 0x297610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x297614: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x297614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x297618: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297618u;
    {
        const bool branch_taken_0x297618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x29761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297618u;
        // 0x29761c: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297618) {
            ctx->pc = 0x297630u;
            goto label_297630;
        }
    }
    ctx->pc = 0x297620u;
    // 0x297620: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x297620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x297624: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x297624u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x297628: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297628u;
    {
        const bool branch_taken_0x297628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x297628) {
            ctx->pc = 0x29762Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297628u;
            // 0x29762c: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x297638u;
            goto label_297638;
        }
    }
    ctx->pc = 0x297630u;
label_297630:
    // 0x297630: 0xc60000e4  lwc1        $f0, 0xE4($s0)
    ctx->pc = 0x297630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x297634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_297638:
    // 0x297638: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x297638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29763c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x29763cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x297640: 0x2e420009  sltiu       $v0, $s2, 0x9
    ctx->pc = 0x297640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x297644: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x297644u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x297648: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x297648u;
    {
        const bool branch_taken_0x297648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29764Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297648u;
        // 0x29764c: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297648) {
            ctx->pc = 0x297738u;
            goto label_297738;
        }
    }
    ctx->pc = 0x297650u;
    // 0x297650: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x297650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x297654: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x297654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x297658: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x297658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29765c: 0x8c63bc20  lw          $v1, -0x43E0($v1)
    ctx->pc = 0x29765cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949920)));
    // 0x297660: 0x600008  jr          $v1
    ctx->pc = 0x297660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297668u: goto label_297668;
            case 0x297688u: goto label_297688;
            case 0x2976A0u: goto label_2976a0;
            case 0x2976B8u: goto label_2976b8;
            case 0x2976D8u: goto label_2976d8;
            case 0x2976F0u: goto label_2976f0;
            case 0x297718u: goto label_297718;
            case 0x297728u: goto label_297728;
            case 0x297738u: goto label_297738;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297660u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x297668u;
label_297668:
    // 0x297668: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x297668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29766c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x29766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297670: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x297670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x297674: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x297674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297678: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x297678u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x29767c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x29767Cu;
    {
        const bool branch_taken_0x29767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29767Cu;
        // 0x297680: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29767c) {
            ctx->pc = 0x297708u;
            goto label_297708;
        }
    }
    ctx->pc = 0x297684u;
    // 0x297684: 0x0  nop
    ctx->pc = 0x297684u;
    // NOP
label_297688:
    // 0x297688: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x297688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29768c: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x29768cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297690: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x297690u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x297694: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x297694u;
    {
        const bool branch_taken_0x297694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297694u;
        // 0x297698: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x297694) {
            ctx->pc = 0x297738u;
            goto label_297738;
        }
    }
    ctx->pc = 0x29769Cu;
    // 0x29769c: 0x0  nop
    ctx->pc = 0x29769cu;
    // NOP
label_2976a0:
    // 0x2976a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2976a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976a4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2976a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2976a8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2976a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2976ac: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2976acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2976b0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2976B0u;
    {
        const bool branch_taken_0x2976b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976B0u;
        // 0x2976b4: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976b0) {
            ctx->pc = 0x297704u;
            goto label_297704;
        }
    }
    ctx->pc = 0x2976B8u;
label_2976b8:
    // 0x2976b8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2976b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976bc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2976bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2976c0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2976c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2976c4: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2976c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2976c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2976c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2976cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2976CCu;
    {
        const bool branch_taken_0x2976cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976CCu;
        // 0x2976d0: 0x46030841  sub.s       $f1, $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976cc) {
            ctx->pc = 0x297708u;
            goto label_297708;
        }
    }
    ctx->pc = 0x2976D4u;
    // 0x2976d4: 0x0  nop
    ctx->pc = 0x2976d4u;
    // NOP
label_2976d8:
    // 0x2976d8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2976d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976dc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2976dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2976e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2976e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2976e4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2976E4u;
    {
        const bool branch_taken_0x2976e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976E4u;
        // 0x2976e8: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976e4) {
            ctx->pc = 0x297738u;
            goto label_297738;
        }
    }
    ctx->pc = 0x2976ECu;
    // 0x2976ec: 0x0  nop
    ctx->pc = 0x2976ecu;
    // NOP
label_2976f0:
    // 0x2976f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2976f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2976f4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2976f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2976f8: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2976f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2976fc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2976fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x297700: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x297700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_297704:
    // 0x297704: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x297704u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_297708:
    // 0x297708: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x297708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29770c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x29770Cu;
    {
        const bool branch_taken_0x29770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29770Cu;
        // 0x297710: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29770c) {
            ctx->pc = 0x297738u;
            goto label_297738;
        }
    }
    ctx->pc = 0x297714u;
    // 0x297714: 0x0  nop
    ctx->pc = 0x297714u;
    // NOP
label_297718:
    // 0x297718: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x297718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29771c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x29771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297720: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x297720u;
    {
        const bool branch_taken_0x297720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297720u;
        // 0x297724: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297720) {
            ctx->pc = 0x297734u;
            goto label_297734;
        }
    }
    ctx->pc = 0x297728u;
label_297728:
    // 0x297728: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x297728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29772c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x29772cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297730: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x297730u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_297734:
    // 0x297734: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x297734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_297738:
    // 0x297738: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x297738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29773c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x29773cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297740: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297740u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x297744: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x297744u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x297748: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x297748u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29774c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x29774cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_297750:
    // 0x297750: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x297750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_297754:
    // 0x297754: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x297754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297758: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x297758u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29775c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x29775cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297760: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x297760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297764: 0x3e00008  jr          $ra
    ctx->pc = 0x297764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297764u;
        // 0x297768: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29776Cu;
    // 0x29776c: 0x0  nop
    ctx->pc = 0x29776cu;
    // NOP
    ctx->pc = 0x297770u;
}
