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

// Function: sub_0025D540
// Address: 0x25d540 - 0x25de60
void sub_0025D540_0x25d540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D540_0x25d540");
#endif

    switch (ctx->pc) {
        case 0x25d5c0u: goto label_25d5c0;
        case 0x25d654u: goto label_25d654;
        case 0x25d678u: goto label_25d678;
        case 0x25d878u: goto label_25d878;
        case 0x25d914u: goto label_25d914;
        case 0x25d940u: goto label_25d940;
        case 0x25d958u: goto label_25d958;
        case 0x25db5cu: goto label_25db5c;
        case 0x25dd5cu: goto label_25dd5c;
        case 0x25dd74u: goto label_25dd74;
        default: break;
    }

    ctx->pc = 0x25d540u;

    // 0x25d540: 0x27bdf310  addiu       $sp, $sp, -0xCF0
    ctx->pc = 0x25d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963984));
    // 0x25d544: 0xffb00c70  sd          $s0, 0xC70($sp)
    ctx->pc = 0x25d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3184), GPR_U64(ctx, 16));
    // 0x25d548: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25d548u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d54c: 0xffb10c78  sd          $s1, 0xC78($sp)
    ctx->pc = 0x25d54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3192), GPR_U64(ctx, 17));
    // 0x25d550: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d550u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d554: 0xffb20c80  sd          $s2, 0xC80($sp)
    ctx->pc = 0x25d554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3200), GPR_U64(ctx, 18));
    // 0x25d558: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x25d558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d55c: 0xe7b50cc8  swc1        $f21, 0xCC8($sp)
    ctx->pc = 0x25d55cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3272), bits); }
    // 0x25d560: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x25d560u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x25d564: 0xffb30c88  sd          $s3, 0xC88($sp)
    ctx->pc = 0x25d564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3208), GPR_U64(ctx, 19));
    // 0x25d568: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x25d568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x25d56c: 0xffb40c90  sd          $s4, 0xC90($sp)
    ctx->pc = 0x25d56cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3216), GPR_U64(ctx, 20));
    // 0x25d570: 0xffb50c98  sd          $s5, 0xC98($sp)
    ctx->pc = 0x25d570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3224), GPR_U64(ctx, 21));
    // 0x25d574: 0xffb60ca0  sd          $s6, 0xCA0($sp)
    ctx->pc = 0x25d574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3232), GPR_U64(ctx, 22));
    // 0x25d578: 0xffb70ca8  sd          $s7, 0xCA8($sp)
    ctx->pc = 0x25d578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3240), GPR_U64(ctx, 23));
    // 0x25d57c: 0xffbe0cb0  sd          $fp, 0xCB0($sp)
    ctx->pc = 0x25d57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3248), GPR_U64(ctx, 30));
    // 0x25d580: 0xffbf0cb8  sd          $ra, 0xCB8($sp)
    ctx->pc = 0x25d580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3256), GPR_U64(ctx, 31));
    // 0x25d584: 0xe7b80ce0  swc1        $f24, 0xCE0($sp)
    ctx->pc = 0x25d584u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3296), bits); }
    // 0x25d588: 0xe7b70cd8  swc1        $f23, 0xCD8($sp)
    ctx->pc = 0x25d588u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3288), bits); }
    // 0x25d58c: 0xe7b60cd0  swc1        $f22, 0xCD0($sp)
    ctx->pc = 0x25d58cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3280), bits); }
    // 0x25d590: 0xe7b40cc0  swc1        $f20, 0xCC0($sp)
    ctx->pc = 0x25d590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3264), bits); }
    // 0x25d594: 0xafa40c64  sw          $a0, 0xC64($sp)
    ctx->pc = 0x25d594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 3172), GPR_U32(ctx, 4));
    // 0x25d598: 0x144000e0  bnez        $v0, . + 4 + (0xE0 << 2)
    ctx->pc = 0x25D598u;
    {
        const bool branch_taken_0x25d598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D598u;
        // 0x25d59c: 0x96170004  lhu         $s7, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d598) {
            ctx->pc = 0x25D91Cu;
            goto label_25d91c;
        }
    }
    ctx->pc = 0x25D5A0u;
    // 0x25d5a0: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x25d5a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x25d5a4: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x25d5a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25d5a8: 0x5440021b  bnel        $v0, $zero, . + 4 + (0x21B << 2)
    ctx->pc = 0x25D5A8u;
    {
        const bool branch_taken_0x25d5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25d5a8) {
            ctx->pc = 0x25D5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D5A8u;
            // 0x25d5ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DE18u;
            goto label_25de18;
        }
    }
    ctx->pc = 0x25D5B0u;
    // 0x25d5b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d5b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x25d5b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x25d5b8: 0xc0474ac  jal         func_11D2B0
    ctx->pc = 0x25D5B8u;
    SET_GPR_U32(ctx, 31, 0x25D5C0u);
    ctx->pc = 0x25D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D5B8u;
    // 0x25d5bc: 0x27a40c60  addiu       $a0, $sp, 0xC60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D2B0u, 0x25D5B8u, 0x25D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D5C0u;
label_25d5c0:
    // 0x25d5c0: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x25d5c0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25d5c4: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x25d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
    // 0x25d5c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x25d5c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x25d5cc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x25d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x25d5d0: 0x244202a  slt         $a0, $s2, $a0
    ctx->pc = 0x25d5d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25d5d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x25d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25d5d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x25d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x25d5dc: 0x4900a  movz        $s2, $zero, $a0
    ctx->pc = 0x25d5dcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x25d5e0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x25d5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x25d5e4: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x25d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x25d5e8: 0xaf82ca14  sw          $v0, -0x35EC($gp)
    ctx->pc = 0x25d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953492), GPR_U32(ctx, 2));
    // 0x25d5ec: 0xc7808b44  lwc1        $f0, -0x74BC($gp)
    ctx->pc = 0x25d5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d5f0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x25d5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x25d5f4: 0xaf83ca18  sw          $v1, -0x35E8($gp)
    ctx->pc = 0x25d5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294953496), GPR_U32(ctx, 3));
    // 0x25d5f8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25d5fc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x25d5fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d600: 0xc7a00c60  lwc1        $f0, 0xC60($sp)
    ctx->pc = 0x25d600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d604: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x25d604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x25d608: 0x4614b601  sub.s       $f24, $f22, $f20
    ctx->pc = 0x25d608u;
    ctx->f[24] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
    // 0x25d60c: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x25d60cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x25d610: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25d610u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x25d614: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x25d614u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x25d618: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x25d618u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x25d61c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x25d61cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x25d620: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x25d620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x25d624: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25d624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25d628: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x25d628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x25d62c: 0x450000b2  bc1f        . + 4 + (0xB2 << 2)
    ctx->pc = 0x25D62Cu;
    {
        const bool branch_taken_0x25d62c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D62Cu;
        // 0x25d630: 0x245e0008  addiu       $fp, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d62c) {
            ctx->pc = 0x25D8F8u;
            goto label_25d8f8;
        }
    }
    ctx->pc = 0x25D634u;
    // 0x25d634: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x25d634u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x25d638: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x25d638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x25d63c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d640: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d644: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25d644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d648: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25d648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d64c: 0xc097536  jal         func_25D4D8
    ctx->pc = 0x25D64Cu;
    SET_GPR_U32(ctx, 31, 0x25D654u);
    ctx->pc = 0x25D650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D64Cu;
    // 0x25d650: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4D8u, 0x25D64Cu, 0x25D654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D654u;
label_25d654:
    // 0x25d654: 0x144001f0  bnez        $v0, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x25D654u;
    {
        const bool branch_taken_0x25d654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D654u;
        // 0x25d658: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d654) {
            ctx->pc = 0x25DE18u;
            goto label_25de18;
        }
    }
    ctx->pc = 0x25D65Cu;
    // 0x25d65c: 0x12e001ec  beqz        $s7, . + 4 + (0x1EC << 2)
    ctx->pc = 0x25D65Cu;
    {
        const bool branch_taken_0x25d65c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D65Cu;
        // 0x25d660: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d65c) {
            ctx->pc = 0x25DE10u;
            goto label_25de10;
        }
    }
    ctx->pc = 0x25D664u;
    // 0x25d664: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x25d664u;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x25d668: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x25d668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x25d66c: 0xc7958b48  lwc1        $f21, -0x74B8($gp)
    ctx->pc = 0x25d66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d670: 0x27b30c40  addiu       $s3, $sp, 0xC40
    ctx->pc = 0x25d670u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 3136));
    // 0x25d674: 0x0  nop
    ctx->pc = 0x25d674u;
    // NOP
label_25d678:
    // 0x25d678: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x25d678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x25d67c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x25d67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x25d680: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25d680u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d684: 0x28430009  slti        $v1, $v0, 0x9
    ctx->pc = 0x25d684u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25d688: 0x50600087  beql        $v1, $zero, . + 4 + (0x87 << 2)
    ctx->pc = 0x25D688u;
    {
        const bool branch_taken_0x25d688 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d688) {
            ctx->pc = 0x25D68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D688u;
            // 0x25d68c: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D8A8u;
            goto label_25d8a8;
        }
    }
    ctx->pc = 0x25D690u;
    // 0x25d690: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x25d690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25d694: 0x14400084  bnez        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x25D694u;
    {
        const bool branch_taken_0x25d694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D694u;
        // 0x25d698: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d694) {
            ctx->pc = 0x25D8A8u;
            goto label_25d8a8;
        }
    }
    ctx->pc = 0x25D69Cu;
    // 0x25d69c: 0xc7818b4c  lwc1        $f1, -0x74B4($gp)
    ctx->pc = 0x25d69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d6a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d6a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d6a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d6a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d6a8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25d6a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25d6ac: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x25d6acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d6b0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25D6B0u;
    {
        const bool branch_taken_0x25d6b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6B0u;
        // 0x25d6b4: 0x27a40c20  addiu       $a0, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6b0) {
            ctx->pc = 0x25D6C8u;
            goto label_25d6c8;
        }
    }
    ctx->pc = 0x25D6B8u;
    // 0x25d6b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d6b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d6bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D6BCu;
    {
        const bool branch_taken_0x25d6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D6BCu;
        // 0x25d6c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d6bc) {
            ctx->pc = 0x25D6D0u;
            goto label_25d6d0;
        }
    }
    ctx->pc = 0x25D6C4u;
    // 0x25d6c4: 0x0  nop
    ctx->pc = 0x25d6c4u;
    // NOP
label_25d6c8:
    // 0x25d6c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25d6c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d6cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d6ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d6d0:
    // 0x25d6d0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d6d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d6d4: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25d6d4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d6d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25d6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25d6dc: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25d6e0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25d6e0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25d6e4: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25d6e4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d6e8: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25d6e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d6ec: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25d6ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d6f0: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25d6f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d6f4: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25d6f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d6f8: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25d6f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d6fc: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25d6fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d700: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25d700u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d704: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25d704u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d708: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25d708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d70c: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25d70cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d710: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25d710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d714: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25d714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25d718: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25d718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d71c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D71Cu;
    {
        const bool branch_taken_0x25d71c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D71Cu;
        // 0x25d720: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d71c) {
            ctx->pc = 0x25D730u;
            goto label_25d730;
        }
    }
    ctx->pc = 0x25D724u;
    // 0x25d724: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d724u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d728: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25D728u;
    {
        const bool branch_taken_0x25d728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D728u;
        // 0x25d72c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d728) {
            ctx->pc = 0x25D738u;
            goto label_25d738;
        }
    }
    ctx->pc = 0x25D730u;
label_25d730:
    // 0x25d730: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d730u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d734: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25d734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25d738:
    // 0x25d738: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x25d738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d73c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x25d73cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d740: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x25d740u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d744: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x25d744u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d748: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x25d748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d74c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x25d74cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d750: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x25d750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d754: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x25d754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d758: 0xf8800030  sqc2        $vf0, 0x30($a0)
    ctx->pc = 0x25d758u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25d75c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d760: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x25d760u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25d764: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x25d764u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25d768: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x25d768u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x25d76c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d76cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d774: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25d774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25d778: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25d778u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25d77c: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25d77cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25d780: 0xd8850010  lqc2        $vf5, 0x10($a0)
    ctx->pc = 0x25d780u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25d784: 0xd8860020  lqc2        $vf6, 0x20($a0)
    ctx->pc = 0x25d784u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25d788: 0xd8870030  lqc2        $vf7, 0x30($a0)
    ctx->pc = 0x25d788u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x25d78c: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x25d78cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d790: 0xc7818b50  lwc1        $f1, -0x74B0($gp)
    ctx->pc = 0x25d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d794: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25D794u;
    {
        const bool branch_taken_0x25d794 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25d794) {
            ctx->pc = 0x25D798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D794u;
            // 0x25d798: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D7A8u;
            goto label_25d7a8;
        }
    }
    ctx->pc = 0x25D79Cu;
    // 0x25d79c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d7a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25D7A0u;
    {
        const bool branch_taken_0x25d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7A0u;
        // 0x25d7a4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7a0) {
            ctx->pc = 0x25D7ACu;
            goto label_25d7ac;
        }
    }
    ctx->pc = 0x25D7A8u;
label_25d7a8:
    // 0x25d7a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d7a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d7ac:
    // 0x25d7ac: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d7acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d7b0: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25d7b0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d7b4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25d7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25d7b8: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25d7bc: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25d7bcu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25d7c0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25d7c0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d7c4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25d7c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d7c8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25d7c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d7cc: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25d7ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d7d0: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25d7d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d7d4: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25d7d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d7d8: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25d7d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d7dc: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25d7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d7e0: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25d7e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d7e4: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25d7e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d7e8: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25d7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d7ec: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25d7ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d7f0: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25d7f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25d7f4: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25d7f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d7f8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25D7F8u;
    {
        const bool branch_taken_0x25d7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D7F8u;
        // 0x25d7fc: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d7f8) {
            ctx->pc = 0x25D810u;
            goto label_25d810;
        }
    }
    ctx->pc = 0x25D800u;
    // 0x25d800: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d800u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d804: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D804u;
    {
        const bool branch_taken_0x25d804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D804u;
        // 0x25d808: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d804) {
            ctx->pc = 0x25D818u;
            goto label_25d818;
        }
    }
    ctx->pc = 0x25D80Cu;
    // 0x25d80c: 0x0  nop
    ctx->pc = 0x25d80cu;
    // NOP
label_25d810:
    // 0x25d810: 0x4a0003bf  vwaitq
    ctx->pc = 0x25d810u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25d814: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25d814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25d818:
    // 0x25d818: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x25d818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d81c: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25d81cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d820: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x25d820u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d824: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x25d824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d828: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x25d828u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25d82c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x25d82cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d830: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x25d830u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25d834: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x25d834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d838: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x25d838u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25d83c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x25d83cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25d840: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x25d840u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25d844: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x25d844u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25d848: 0xf8850010  sqc2        $vf5, 0x10($a0)
    ctx->pc = 0x25d848u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25d84c: 0xf8860020  sqc2        $vf6, 0x20($a0)
    ctx->pc = 0x25d84cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25d850: 0xf8870030  sqc2        $vf7, 0x30($a0)
    ctx->pc = 0x25d850u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25d854: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25d854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25d858: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25d858u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d85c: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x25d85cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25d860: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x25d860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d864: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25d864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25d868: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25d868u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25d86c: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x25d86cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x25d870: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25D870u;
    SET_GPR_U32(ctx, 31, 0x25D878u);
    ctx->pc = 0x25D874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D870u;
    // 0x25d874: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25D870u, 0x25D878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D878u;
label_25d878:
    // 0x25d878: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x25d878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d87c: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x25d87cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25d880: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d884: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25d884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d888: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x25d888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25d88c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25d890: 0x4614a01a  mula.s      $f20, $f20
    ctx->pc = 0x25d890u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[20], ctx->f[20]));
    // 0x25d894: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x25d894u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25d898: 0x46000004  c1          0x4
    ctx->pc = 0x25d898u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25d89c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25D89Cu;
    {
        const bool branch_taken_0x25d89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D89Cu;
        // 0x25d8a0: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d89c) {
            ctx->pc = 0x25D8D8u;
            goto label_25d8d8;
        }
    }
    ctx->pc = 0x25D8A4u;
    // 0x25d8a4: 0x0  nop
    ctx->pc = 0x25d8a4u;
    // NOP
label_25d8a8:
    // 0x25d8a8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d8a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d8ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d8acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d8b0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25d8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25d8b4: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x25d8b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x25d8b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d8b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d8bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d8bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d8c0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25d8c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25d8c4: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x25d8c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25d8c8: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x25d8c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x25d8cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d8ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d8d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d8d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d8d4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25d8d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_25d8d8:
    // 0x25d8d8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25d8d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x25d8dc: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x25d8dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x25d8e0: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x25d8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x25d8e4: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x25D8E4u;
    {
        const bool branch_taken_0x25d8e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8E4u;
        // 0x25d8e8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8e4) {
            ctx->pc = 0x25D678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d678;
        }
    }
    ctx->pc = 0x25D8ECu;
    // 0x25d8ec: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x25D8ECu;
    {
        const bool branch_taken_0x25d8ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D8ECu;
        // 0x25d8f0: 0x8fa30c64  lw          $v1, 0xC64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d8ec) {
            ctx->pc = 0x25DE14u;
            goto label_25de14;
        }
    }
    ctx->pc = 0x25D8F4u;
    // 0x25d8f4: 0x0  nop
    ctx->pc = 0x25d8f4u;
    // NOP
label_25d8f8:
    // 0x25d8f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x25d8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d8fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d8fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d900: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25d900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d904: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x25d904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d908: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x25d908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d90c: 0xc097536  jal         func_25D4D8
    ctx->pc = 0x25D90Cu;
    SET_GPR_U32(ctx, 31, 0x25D914u);
    ctx->pc = 0x25D910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D90Cu;
    // 0x25d910: 0x3a0902d  daddu       $s2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4D8u, 0x25D90Cu, 0x25D914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D914u;
label_25d914:
    // 0x25d914: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D914u;
    {
        const bool branch_taken_0x25d914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D914u;
        // 0x25d918: 0x27b30600  addiu       $s3, $sp, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d914) {
            ctx->pc = 0x25D928u;
            goto label_25d928;
        }
    }
    ctx->pc = 0x25D91Cu;
label_25d91c:
    // 0x25d91c: 0x1000013e  b           . + 4 + (0x13E << 2)
    ctx->pc = 0x25D91Cu;
    {
        const bool branch_taken_0x25d91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D91Cu;
        // 0x25d920: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d91c) {
            ctx->pc = 0x25DE18u;
            goto label_25de18;
        }
    }
    ctx->pc = 0x25D924u;
    // 0x25d924: 0x0  nop
    ctx->pc = 0x25d924u;
    // NOP
label_25d928:
    // 0x25d928: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25d928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d92c: 0x26870001  addiu       $a3, $s4, 0x1
    ctx->pc = 0x25d92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x25d930: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x25d930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d934: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x25d934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d938: 0xc097536  jal         func_25D4D8
    ctx->pc = 0x25D938u;
    SET_GPR_U32(ctx, 31, 0x25D940u);
    ctx->pc = 0x25D93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D938u;
    // 0x25d93c: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4D8u, 0x25D938u, 0x25D940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D940u;
label_25d940:
    // 0x25d940: 0x12e00133  beqz        $s7, . + 4 + (0x133 << 2)
    ctx->pc = 0x25D940u;
    {
        const bool branch_taken_0x25d940 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D940u;
        // 0x25d944: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d940) {
            ctx->pc = 0x25DE10u;
            goto label_25de10;
        }
    }
    ctx->pc = 0x25D948u;
    // 0x25d948: 0xc7958b54  lwc1        $f21, -0x74AC($gp)
    ctx->pc = 0x25d948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25d94c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x25d94cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x25d950: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x25d950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25d954: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x25d954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_25d958:
    // 0x25d958: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x25d958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
    // 0x25d95c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x25d95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x25d960: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x25d960u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25d964: 0x28430009  slti        $v1, $v0, 0x9
    ctx->pc = 0x25d964u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x25d968: 0x50600105  beql        $v1, $zero, . + 4 + (0x105 << 2)
    ctx->pc = 0x25D968u;
    {
        const bool branch_taken_0x25d968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d968) {
            ctx->pc = 0x25D96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D968u;
            // 0x25d96c: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DD80u;
            goto label_25dd80;
        }
    }
    ctx->pc = 0x25D970u;
    // 0x25d970: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x25d970u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x25d974: 0x14400102  bnez        $v0, . + 4 + (0x102 << 2)
    ctx->pc = 0x25D974u;
    {
        const bool branch_taken_0x25d974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D974u;
        // 0x25d978: 0x86420000  lh          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d974) {
            ctx->pc = 0x25DD80u;
            goto label_25dd80;
        }
    }
    ctx->pc = 0x25D97Cu;
    // 0x25d97c: 0xc7818b58  lwc1        $f1, -0x74A8($gp)
    ctx->pc = 0x25d97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25d980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25d984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25d984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25d988: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25d988u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25d98c: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x25d98cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25d990: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x25D990u;
    {
        const bool branch_taken_0x25d990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D990u;
        // 0x25d994: 0x27b00c20  addiu       $s0, $sp, 0xC20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 3104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d990) {
            ctx->pc = 0x25D9A8u;
            goto label_25d9a8;
        }
    }
    ctx->pc = 0x25D998u;
    // 0x25d998: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d99c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25D99Cu;
    {
        const bool branch_taken_0x25d99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D99Cu;
        // 0x25d9a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d99c) {
            ctx->pc = 0x25D9B0u;
            goto label_25d9b0;
        }
    }
    ctx->pc = 0x25D9A4u;
    // 0x25d9a4: 0x0  nop
    ctx->pc = 0x25d9a4u;
    // NOP
label_25d9a8:
    // 0x25d9a8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25d9a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25d9ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25d9acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25d9b0:
    // 0x25d9b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25d9b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25d9b4: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25d9b4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25d9b8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25d9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25d9bc: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25d9c0: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25d9c0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25d9c4: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25d9c4u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d9c8: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25d9c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d9cc: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25d9ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25d9d0: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25d9d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d9d4: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25d9d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d9d8: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25d9d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d9dc: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25d9dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d9e0: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25d9e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d9e4: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25d9e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d9e8: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25d9e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d9ec: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25d9ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d9f0: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25d9f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25d9f4: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25d9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25d9f8: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25d9f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25d9fc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D9FCu;
    {
        const bool branch_taken_0x25d9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D9FCu;
        // 0x25da00: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25d9fc) {
            ctx->pc = 0x25DA10u;
            goto label_25da10;
        }
    }
    ctx->pc = 0x25DA04u;
    // 0x25da04: 0x4a0003bf  vwaitq
    ctx->pc = 0x25da04u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25da08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25DA08u;
    {
        const bool branch_taken_0x25da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA08u;
        // 0x25da0c: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da08) {
            ctx->pc = 0x25DA18u;
            goto label_25da18;
        }
    }
    ctx->pc = 0x25DA10u;
label_25da10:
    // 0x25da10: 0x4a0003bf  vwaitq
    ctx->pc = 0x25da10u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25da14: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25da14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25da18:
    // 0x25da18: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x25da18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25da1c: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x25da1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25da20: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x25da20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25da24: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x25da24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25da28: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x25da28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25da2c: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x25da2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25da30: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x25da30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25da34: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x25da34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25da38: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x25da38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25da3c: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25da3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25da40: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25da40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25da44: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25da44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25da48: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x25da48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x25da4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25da4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25da50: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25da50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25da54: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25da54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25da58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25da58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25da5c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25da5cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25da60: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25da60u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25da64: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25da64u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25da68: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25da68u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25da6c: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x25da6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25da70: 0xc7818b5c  lwc1        $f1, -0x74A4($gp)
    ctx->pc = 0x25da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25da74: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25DA74u;
    {
        const bool branch_taken_0x25da74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25da74) {
            ctx->pc = 0x25DA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DA74u;
            // 0x25da78: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DA88u;
            goto label_25da88;
        }
    }
    ctx->pc = 0x25DA7Cu;
    // 0x25da7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25da7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25da80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DA80u;
    {
        const bool branch_taken_0x25da80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DA80u;
        // 0x25da84: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25da80) {
            ctx->pc = 0x25DA8Cu;
            goto label_25da8c;
        }
    }
    ctx->pc = 0x25DA88u;
label_25da88:
    // 0x25da88: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25da88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25da8c:
    // 0x25da8c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25da8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25da90: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25da90u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25da94: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25da94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25da98: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25da98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25da9c: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25da9cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25daa0: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25daa0u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25daa4: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25daa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25daa8: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25daa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25daac: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25daacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dab0: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25dab0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dab4: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25dab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dab8: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25dab8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dabc: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25dabcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dac0: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25dac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dac4: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25dac4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dac8: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25dac8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dacc: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25daccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dad0: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25dad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25dad4: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25dad4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dad8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DAD8u;
    {
        const bool branch_taken_0x25dad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAD8u;
        // 0x25dadc: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dad8) {
            ctx->pc = 0x25DAF0u;
            goto label_25daf0;
        }
    }
    ctx->pc = 0x25DAE0u;
    // 0x25dae0: 0x4a0003bf  vwaitq
    ctx->pc = 0x25dae0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25dae4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25DAE4u;
    {
        const bool branch_taken_0x25dae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DAE4u;
        // 0x25dae8: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dae4) {
            ctx->pc = 0x25DAF8u;
            goto label_25daf8;
        }
    }
    ctx->pc = 0x25DAECu;
    // 0x25daec: 0x0  nop
    ctx->pc = 0x25daecu;
    // NOP
label_25daf0:
    // 0x25daf0: 0x4a0003bf  vwaitq
    ctx->pc = 0x25daf0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25daf4: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25daf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25daf8:
    // 0x25daf8: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x25daf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dafc: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25dafcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25db00: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x25db00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25db04: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x25db04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25db08: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x25db08u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25db0c: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x25db0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25db10: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x25db10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25db14: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x25db14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25db18: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x25db18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25db1c: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x25db1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25db20: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x25db20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25db24: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25db24u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25db28: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25db28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25db2c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25db2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25db30: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25db30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25db34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x25db34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x25db38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25db38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25db3c: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x25db3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25db40: 0x27b50c00  addiu       $s5, $sp, 0xC00
    ctx->pc = 0x25db40u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 3072));
    // 0x25db44: 0x27b40c40  addiu       $s4, $sp, 0xC40
    ctx->pc = 0x25db44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 3136));
    // 0x25db48: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25db48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25db4c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25db4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25db50: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x25db50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x25db54: 0xc0474d0  jal         func_11D340
    ctx->pc = 0x25DB54u;
    SET_GPR_U32(ctx, 31, 0x25DB5Cu);
    ctx->pc = 0x25DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DB54u;
    // 0x25db58: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D340u, 0x25DB54u, 0x25DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DB5Cu;
label_25db5c:
    // 0x25db5c: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x25db5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25db60: 0xda900000  lqc2        $vf16, 0x0($s4)
    ctx->pc = 0x25db60u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x25db64: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25db64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25db68: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x25db68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25db6c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x25db6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x25db70: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x25db70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x25db74: 0x4616b01a  mula.s      $f22, $f22
    ctx->pc = 0x25db74u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[22], ctx->f[22]));
    // 0x25db78: 0x4600001d  msub.s      $f0, $f0, $f0
    ctx->pc = 0x25db78u;
    ctx->f[0] = FPU_SUB_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x25db7c: 0x46000004  c1          0x4
    ctx->pc = 0x25db7cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x25db80: 0xc7818b60  lwc1        $f1, -0x74A0($gp)
    ctx->pc = 0x25db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25db84: 0xe6a0000c  swc1        $f0, 0xC($s5)
    ctx->pc = 0x25db84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x25db88: 0x86620000  lh          $v0, 0x0($s3)
    ctx->pc = 0x25db88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25db8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25db8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25db90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25db90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25db94: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25db94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25db98: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x25db98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25db9c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25DB9Cu;
    {
        const bool branch_taken_0x25db9c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25db9c) {
            ctx->pc = 0x25DBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DB9Cu;
            // 0x25dba0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DBB0u;
            goto label_25dbb0;
        }
    }
    ctx->pc = 0x25DBA4u;
    // 0x25dba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25dba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25dba8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DBA8u;
    {
        const bool branch_taken_0x25dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DBA8u;
        // 0x25dbac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dba8) {
            ctx->pc = 0x25DBB4u;
            goto label_25dbb4;
        }
    }
    ctx->pc = 0x25DBB0u;
label_25dbb0:
    // 0x25dbb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25dbb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dbb4:
    // 0x25dbb4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25dbb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25dbb8: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25dbb8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25dbbc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25dbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25dbc0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25dbc4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25dbc4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25dbc8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25dbc8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25dbcc: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25dbccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dbd0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25dbd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25dbd4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25dbd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dbd8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25dbd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dbdc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25dbdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dbe0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25dbe0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dbe4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25dbe4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dbe8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25dbe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dbec: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25dbecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dbf0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25dbf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dbf4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25dbf4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dbf8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25dbf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25dbfc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25dbfcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dc00: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DC00u;
    {
        const bool branch_taken_0x25dc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC00u;
        // 0x25dc04: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc00) {
            ctx->pc = 0x25DC18u;
            goto label_25dc18;
        }
    }
    ctx->pc = 0x25DC08u;
    // 0x25dc08: 0x4a0003bf  vwaitq
    ctx->pc = 0x25dc08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25dc0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25DC0Cu;
    {
        const bool branch_taken_0x25dc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC0Cu;
        // 0x25dc10: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc0c) {
            ctx->pc = 0x25DC20u;
            goto label_25dc20;
        }
    }
    ctx->pc = 0x25DC14u;
    // 0x25dc14: 0x0  nop
    ctx->pc = 0x25dc14u;
    // NOP
label_25dc18:
    // 0x25dc18: 0x4a0003bf  vwaitq
    ctx->pc = 0x25dc18u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25dc1c: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25dc1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25dc20:
    // 0x25dc20: 0x4ae0012c  vsub.yzw    $vf4, $vf0, $vf0
    ctx->pc = 0x25dc20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25dc24: 0x4b20016c  vsub.xw     $vf5, $vf0, $vf0
    ctx->pc = 0x25dc24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25dc28: 0x4b2001ac  vsub.xw     $vf6, $vf0, $vf0
    ctx->pc = 0x25dc28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25dc2c: 0x4b000103  vaddw.x     $vf4, $vf0, $vf0w
    ctx->pc = 0x25dc2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25dc30: 0x4a9c0168  vadd.y      $vf5, $vf0, $vf28
    ctx->pc = 0x25dc30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], ctx->vu0_vf[28]); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25dc34: 0x4a9c0184  vsubx.y     $vf6, $vf0, $vf28x
    ctx->pc = 0x25dc34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25dc38: 0x4a5c0140  vaddx.z     $vf5, $vf0, $vf28x
    ctx->pc = 0x25dc38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25dc3c: 0x4a5c0181  vaddy.z     $vf6, $vf0, $vf28y
    ctx->pc = 0x25dc3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25dc40: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x25dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x25dc44: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25dc48: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25dc4c: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25dc50: 0x86620002  lh          $v0, 0x2($s3)
    ctx->pc = 0x25dc50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25dc54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25dc54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dc58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25dc58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25dc5c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x25dc5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x25dc60: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x25dc60u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x25dc64: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25dc64u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25dc68: 0xda050010  lqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25dc68u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25dc6c: 0xda060020  lqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25dc6cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x25dc70: 0xda070030  lqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25dc70u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x25dc74: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x25dc74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25dc78: 0xc7818b64  lwc1        $f1, -0x749C($gp)
    ctx->pc = 0x25dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294937444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25dc7c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x25DC7Cu;
    {
        const bool branch_taken_0x25dc7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x25dc7c) {
            ctx->pc = 0x25DC80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25DC7Cu;
            // 0x25dc80: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25DC90u;
            goto label_25dc90;
        }
    }
    ctx->pc = 0x25DC84u;
    // 0x25dc84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25dc84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25dc88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x25DC88u;
    {
        const bool branch_taken_0x25dc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DC88u;
        // 0x25dc8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dc88) {
            ctx->pc = 0x25DC94u;
            goto label_25dc94;
        }
    }
    ctx->pc = 0x25DC90u;
label_25dc90:
    // 0x25dc90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x25dc90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25dc94:
    // 0x25dc94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x25dc94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25dc98: 0x48a2f800  qmtc2.ni    $v0, $vf31
    ctx->pc = 0x25dc98u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25dc9c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x25dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x25dca0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x25dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x25dca4: 0xd85d0000  lqc2        $vf29, 0x0($v0)
    ctx->pc = 0x25dca4u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(FAST_READ128(0x3AB6E0u));
    // 0x25dca8: 0x4a3ffb3d  vmr32.w     $vf31, $vf31
    ctx->pc = 0x25dca8u;
    { __m128 res = _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,3,2,1)); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25dcac: 0x4a9f0700  vaddx.y     $vf28, $vf0, $vf31x
    ctx->pc = 0x25dcacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dcb0: 0x4b1fffea  vmul.x      $vf31, $vf31, $vf31
    ctx->pc = 0x25dcb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x25dcb4: 0x4bffef5b  vmulw.xyzw  $vf29, $vf29, $vf31w
    ctx->pc = 0x25dcb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dcb8: 0x4bffef58  vmulx.xyzw  $vf29, $vf29, $vf31x
    ctx->pc = 0x25dcb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dcbc: 0x4bdfef58  vmulx.xyz   $vf29, $vf29, $vf31x
    ctx->pc = 0x25dcbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dcc0: 0x4a9de703  vaddw.y     $vf28, $vf28, $vf29w
    ctx->pc = 0x25dcc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dcc4: 0x4b9fef58  vmulx.xy    $vf29, $vf29, $vf31x
    ctx->pc = 0x25dcc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dcc8: 0x4a9de702  vaddz.y     $vf28, $vf28, $vf29z
    ctx->pc = 0x25dcc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dccc: 0x4b1fef58  vmulx.x     $vf29, $vf29, $vf31x
    ctx->pc = 0x25dcccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[31], ctx->vu0_vf[31], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dcd0: 0x4a9de701  vaddy.y     $vf28, $vf28, $vf29y
    ctx->pc = 0x25dcd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dcd4: 0x4a9de700  vaddx.y     $vf28, $vf28, $vf29x
    ctx->pc = 0x25dcd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dcd8: 0x4a80003f  vaddaw.y    $ACC, $vf0, $vf0w
    ctx->pc = 0x25dcd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x25dcdc: 0x4a9ce74d  vmsuby.y    $vf29, $vf28, $vf28y
    ctx->pc = 0x25dcdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dce0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x25DCE0u;
    {
        const bool branch_taken_0x25dce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCE0u;
        // 0x25dce4: 0x4abd03bd  .word       0x4ABD03BD                   # vsqrt       $Q, $vf29y # 00200000 <InstrIdType: R5900_COP2_SPECIAL2> (Delay Slot)
        { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[29], ctx->vu0_vf[29], _MM_SHUFFLE(0,0,0,1))); ctx->vu0_q = sqrtf(std::max(0.0f, ft)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dce0) {
            ctx->pc = 0x25DCF8u;
            goto label_25dcf8;
        }
    }
    ctx->pc = 0x25DCE8u;
    // 0x25dce8: 0x4a0003bf  vwaitq
    ctx->pc = 0x25dce8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25dcec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25DCECu;
    {
        const bool branch_taken_0x25dcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DCECu;
        // 0x25dcf0: 0x4b000724  vsubq.x     $vf28, $vf0, $Q (Delay Slot)
        { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dcec) {
            ctx->pc = 0x25DD00u;
            goto label_25dd00;
        }
    }
    ctx->pc = 0x25DCF4u;
    // 0x25dcf4: 0x0  nop
    ctx->pc = 0x25dcf4u;
    // NOP
label_25dcf8:
    // 0x25dcf8: 0x4a0003bf  vwaitq
    ctx->pc = 0x25dcf8u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x25dcfc: 0x4b000720  vaddq.x     $vf28, $vf0, $Q
    ctx->pc = 0x25dcfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_25dd00:
    // 0x25dd00: 0x4a5c0701  vaddy.z     $vf28, $vf0, $vf28y
    ctx->pc = 0x25dd00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x25dd04: 0x4b1c0741  vaddy.x     $vf29, $vf0, $vf28y
    ctx->pc = 0x25dd04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dd08: 0x4a5c0744  vsubx.z     $vf29, $vf0, $vf28x
    ctx->pc = 0x25dd08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[28], ctx->vu0_vf[28], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x25dd0c: 0x4b44e1be  vmulaz.xz   $ACC, $vf28, $vf4z
    ctx->pc = 0x25dd0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25dd10: 0x4b44e908  vmaddx.xz   $vf4, $vf29, $vf4x
    ctx->pc = 0x25dd10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x25dd14: 0x4b45e1be  vmulaz.xz   $ACC, $vf28, $vf5z
    ctx->pc = 0x25dd14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25dd18: 0x4b45e948  vmaddx.xz   $vf5, $vf29, $vf5x
    ctx->pc = 0x25dd18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x25dd1c: 0x4b46e1be  vmulaz.xz   $ACC, $vf28, $vf6z
    ctx->pc = 0x25dd1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25dd20: 0x4b46e988  vmaddx.xz   $vf6, $vf29, $vf6x
    ctx->pc = 0x25dd20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x25dd24: 0x4b47e1be  vmulaz.xz   $ACC, $vf28, $vf7z
    ctx->pc = 0x25dd24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, -1))); }
    // 0x25dd28: 0x4b47e9c8  vmaddx.xz   $vf7, $vf29, $vf7x
    ctx->pc = 0x25dd28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x25dd2c: 0xfa040000  sqc2        $vf4, 0x0($s0)
    ctx->pc = 0x25dd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x25dd30: 0xfa050010  sqc2        $vf5, 0x10($s0)
    ctx->pc = 0x25dd30u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x25dd34: 0xfa060020  sqc2        $vf6, 0x20($s0)
    ctx->pc = 0x25dd34u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x25dd38: 0xfa070030  sqc2        $vf7, 0x30($s0)
    ctx->pc = 0x25dd38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x25dd3c: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x25dd3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25dd40: 0x27a30c10  addiu       $v1, $sp, 0xC10
    ctx->pc = 0x25dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x25dd44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x25dd44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd48: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x25dd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x25dd4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x25dd50: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x25dd50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x25dd54: 0xc097066  jal         func_25C198
    ctx->pc = 0x25DD54u;
    SET_GPR_U32(ctx, 31, 0x25DD5Cu);
    ctx->pc = 0x25DD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD54u;
    // 0x25dd58: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C198u, 0x25DD54u, 0x25DD5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD5Cu;
label_25dd5c:
    // 0x25dd5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x25dd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd60: 0x27a20c10  addiu       $v0, $sp, 0xC10
    ctx->pc = 0x25dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 3088));
    // 0x25dd64: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x25dd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd68: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x25dd68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25dd6c: 0xc0970a6  jal         func_25C298
    ctx->pc = 0x25DD6Cu;
    SET_GPR_U32(ctx, 31, 0x25DD74u);
    ctx->pc = 0x25DD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DD6Cu;
    // 0x25dd70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C298u, 0x25DD6Cu, 0x25DD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25DD74u;
label_25dd74:
    // 0x25dd74: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25DD74u;
    {
        const bool branch_taken_0x25dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DD74u;
        // 0x25dd78: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dd74) {
            ctx->pc = 0x25DDFCu;
            goto label_25ddfc;
        }
    }
    ctx->pc = 0x25DD7Cu;
    // 0x25dd7c: 0x0  nop
    ctx->pc = 0x25dd7cu;
    // NOP
label_25dd80:
    // 0x25dd80: 0x86630000  lh          $v1, 0x0($s3)
    ctx->pc = 0x25dd80u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25dd84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25dd84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dd88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25dd88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25dd8c: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x25dd8cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25dd90: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x25dd90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25dd94: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x25dd94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25dd98: 0x86640002  lh          $a0, 0x2($s3)
    ctx->pc = 0x25dd98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x25dd9c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x25dd9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x25dda0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x25dda0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x25dda4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x25dda4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x25dda8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x25dda8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x25ddac: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x25ddacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x25ddb0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x25ddb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x25ddb4: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x25ddb4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x25ddb8: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x25ddb8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x25ddbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25ddbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25ddc0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x25ddc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x25ddc4: 0x86420002  lh          $v0, 0x2($s2)
    ctx->pc = 0x25ddc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x25ddc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25ddc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25ddcc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25ddccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25ddd0: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x25ddd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x25ddd4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x25ddd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x25ddd8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x25ddd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x25dddc: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x25dddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x25dde0: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x25dde0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x25dde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25dde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25dde8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x25dde8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x25ddec: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x25ddecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x25ddf0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x25ddf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x25ddf4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x25ddf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x25ddf8: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x25ddf8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_25ddfc:
    // 0x25ddfc: 0x26520006  addiu       $s2, $s2, 0x6
    ctx->pc = 0x25ddfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 6));
    // 0x25de00: 0x2d7102a  slt         $v0, $s6, $s7
    ctx->pc = 0x25de00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x25de04: 0x26730006  addiu       $s3, $s3, 0x6
    ctx->pc = 0x25de04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
    // 0x25de08: 0x1440fed3  bnez        $v0, . + 4 + (-0x12D << 2)
    ctx->pc = 0x25DE08u;
    {
        const bool branch_taken_0x25de08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE08u;
        // 0x25de0c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25de08) {
            ctx->pc = 0x25D958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25d958;
        }
    }
    ctx->pc = 0x25DE10u;
label_25de10:
    // 0x25de10: 0x8fa30c64  lw          $v1, 0xC64($sp)
    ctx->pc = 0x25de10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3172)));
label_25de14:
    // 0x25de14: 0x2231023  subu        $v0, $s1, $v1
    ctx->pc = 0x25de14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_25de18:
    // 0x25de18: 0xdfb00c70  ld          $s0, 0xC70($sp)
    ctx->pc = 0x25de18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 3184)));
    // 0x25de1c: 0xdfb10c78  ld          $s1, 0xC78($sp)
    ctx->pc = 0x25de1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 3192)));
    // 0x25de20: 0xdfb20c80  ld          $s2, 0xC80($sp)
    ctx->pc = 0x25de20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 3200)));
    // 0x25de24: 0xdfb30c88  ld          $s3, 0xC88($sp)
    ctx->pc = 0x25de24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 3208)));
    // 0x25de28: 0xdfb40c90  ld          $s4, 0xC90($sp)
    ctx->pc = 0x25de28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 3216)));
    // 0x25de2c: 0xdfb50c98  ld          $s5, 0xC98($sp)
    ctx->pc = 0x25de2cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 3224)));
    // 0x25de30: 0xdfb60ca0  ld          $s6, 0xCA0($sp)
    ctx->pc = 0x25de30u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 3232)));
    // 0x25de34: 0xdfb70ca8  ld          $s7, 0xCA8($sp)
    ctx->pc = 0x25de34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 3240)));
    // 0x25de38: 0xdfbe0cb0  ld          $fp, 0xCB0($sp)
    ctx->pc = 0x25de38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 3248)));
    // 0x25de3c: 0xdfbf0cb8  ld          $ra, 0xCB8($sp)
    ctx->pc = 0x25de3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3256)));
    // 0x25de40: 0xc7b80ce0  lwc1        $f24, 0xCE0($sp)
    ctx->pc = 0x25de40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x25de44: 0xc7b70cd8  lwc1        $f23, 0xCD8($sp)
    ctx->pc = 0x25de44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x25de48: 0xc7b60cd0  lwc1        $f22, 0xCD0($sp)
    ctx->pc = 0x25de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x25de4c: 0xc7b50cc8  lwc1        $f21, 0xCC8($sp)
    ctx->pc = 0x25de4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x25de50: 0xc7b40cc0  lwc1        $f20, 0xCC0($sp)
    ctx->pc = 0x25de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25de54: 0x3e00008  jr          $ra
    ctx->pc = 0x25DE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE54u;
        // 0x25de58: 0x27bd0cf0  addiu       $sp, $sp, 0xCF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DE5Cu;
    // 0x25de5c: 0x0  nop
    ctx->pc = 0x25de5cu;
    // NOP
    ctx->pc = 0x25de60u;
}
