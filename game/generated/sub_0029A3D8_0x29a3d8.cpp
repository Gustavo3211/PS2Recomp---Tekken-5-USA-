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

// Function: sub_0029A3D8
// Address: 0x29a3d8 - 0x29a548
void sub_0029A3D8_0x29a3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A3D8_0x29a3d8");
#endif

    switch (ctx->pc) {
        case 0x29a428u: goto label_29a428;
        case 0x29a440u: goto label_29a440;
        case 0x29a450u: goto label_29a450;
        case 0x29a460u: goto label_29a460;
        case 0x29a46cu: goto label_29a46c;
        case 0x29a4b0u: goto label_29a4b0;
        case 0x29a4c8u: goto label_29a4c8;
        case 0x29a4dcu: goto label_29a4dc;
        case 0x29a4f0u: goto label_29a4f0;
        case 0x29a514u: goto label_29a514;
        case 0x29a51cu: goto label_29a51c;
        default: break;
    }

    ctx->pc = 0x29a3d8u;

    // 0x29a3d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29a3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29a3dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x29a3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x29a3e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29a3e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3e4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x29a3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29a3e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a3ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29a3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x29a3f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x29a3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x29a3f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x29a3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29a3f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29a3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x29a3fc: 0xe7b40038  swc1        $f20, 0x38($sp)
    ctx->pc = 0x29a3fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x29a400: 0x8e420150  lw          $v0, 0x150($s2)
    ctx->pc = 0x29a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x29a404: 0x8c510100  lw          $s1, 0x100($v0)
    ctx->pc = 0x29a404u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x29a408: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x29a408u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x29a40c: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x29A40Cu;
    {
        const bool branch_taken_0x29a40c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A40Cu;
        // 0x29a410: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a40c) {
            ctx->pc = 0x29A50Cu;
            goto label_29a50c;
        }
    }
    ctx->pc = 0x29A414u;
    // 0x29a414: 0x3c1400ff  lui         $s4, 0xFF
    ctx->pc = 0x29a414u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)255 << 16));
    // 0x29a418: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x29a418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x29a41c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29a41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29a420: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x29a424: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x29a424u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_29a428:
    // 0x29a428: 0x5a200032  blezl       $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x29A428u;
    {
        const bool branch_taken_0x29a428 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x29a428) {
            ctx->pc = 0x29A42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A428u;
            // 0x29a42c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A4F4u;
            goto label_29a4f4;
        }
    }
    ctx->pc = 0x29A430u;
    // 0x29a430: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29a430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a434: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29a434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a438: 0xc0a6952  jal         func_29A548
    ctx->pc = 0x29A438u;
    SET_GPR_U32(ctx, 31, 0x29A440u);
    ctx->pc = 0x29A43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A438u;
    // 0x29a43c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A548u, 0x29A438u, 0x29A440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A440u;
label_29a440:
    // 0x29a440: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a444: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29a444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a448: 0xc0a699c  jal         func_29A670
    ctx->pc = 0x29A448u;
    SET_GPR_U32(ctx, 31, 0x29A450u);
    ctx->pc = 0x29A44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A448u;
    // 0x29a44c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A670u, 0x29A448u, 0x29A450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A450u;
label_29a450:
    // 0x29a450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a454: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29a454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a458: 0xc0a6a12  jal         func_29A848
    ctx->pc = 0x29A458u;
    SET_GPR_U32(ctx, 31, 0x29A460u);
    ctx->pc = 0x29A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A458u;
    // 0x29a45c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A848u, 0x29A458u, 0x29A460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A460u;
label_29a460:
    // 0x29a460: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a464: 0xc0a6baa  jal         func_29AEA8
    ctx->pc = 0x29A464u;
    SET_GPR_U32(ctx, 31, 0x29A46Cu);
    ctx->pc = 0x29A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A464u;
    // 0x29a468: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AEA8u, 0x29A464u, 0x29A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A46Cu;
label_29a46c:
    // 0x29a46c: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x29a46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29a470: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x29a470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x29a474: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x29a474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29a478: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x29a478u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x29a47c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29a47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a480: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x29a480u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a484: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x29a484u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29a488: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a488u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29a48c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x29a48cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x29a490: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x29A490u;
    {
        const bool branch_taken_0x29a490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A490u;
        // 0x29a494: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a490) {
            ctx->pc = 0x29A4A8u;
            goto label_29a4a8;
        }
    }
    ctx->pc = 0x29A498u;
    // 0x29a498: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x29a498u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x29a49c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29a49cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x29a4a0: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x29a4a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x29a4a4: 0x2158025  or          $s0, $s0, $s5
    ctx->pc = 0x29a4a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 21));
label_29a4a8:
    // 0x29a4a8: 0xc0a6a3c  jal         func_29A8F0
    ctx->pc = 0x29A4A8u;
    SET_GPR_U32(ctx, 31, 0x29A4B0u);
    ctx->pc = 0x29A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4A8u;
    // 0x29a4ac: 0x108600  sll         $s0, $s0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29A8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A8F0u, 0x29A4A8u, 0x29A4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4B0u;
label_29a4b0:
    // 0x29a4b0: 0x2148025  or          $s0, $s0, $s4
    ctx->pc = 0x29a4b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 20));
    // 0x29a4b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29a4b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29a4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4c0: 0xc0a6a9e  jal         func_29AA78
    ctx->pc = 0x29A4C0u;
    SET_GPR_U32(ctx, 31, 0x29A4C8u);
    ctx->pc = 0x29A4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4C0u;
    // 0x29a4c4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AA78u, 0x29A4C0u, 0x29A4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4C8u;
label_29a4c8:
    // 0x29a4c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29a4ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29a4d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4d4: 0xc0a6ad0  jal         func_29AB40
    ctx->pc = 0x29A4D4u;
    SET_GPR_U32(ctx, 31, 0x29A4DCu);
    ctx->pc = 0x29A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4D4u;
    // 0x29a4d8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AB40u, 0x29A4D4u, 0x29A4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4DCu;
label_29a4dc:
    // 0x29a4dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29a4dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29a4e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29a4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4e8: 0xc0a6b08  jal         func_29AC20
    ctx->pc = 0x29A4E8u;
    SET_GPR_U32(ctx, 31, 0x29A4F0u);
    ctx->pc = 0x29A4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4E8u;
    // 0x29a4ec: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AC20u, 0x29A4E8u, 0x29A4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4F0u;
label_29a4f0:
    // 0x29a4f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x29a4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_29a4f4:
    // 0x29a4f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29a4f8: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x29a4f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x29a4fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A4FCu;
    {
        const bool branch_taken_0x29a4fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A4FCu;
        // 0x29a500: 0x2a23000a  slti        $v1, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a4fc) {
            ctx->pc = 0x29A50Cu;
            goto label_29a50c;
        }
    }
    ctx->pc = 0x29A504u;
    // 0x29a504: 0x1460ffc8  bnez        $v1, . + 4 + (-0x38 << 2)
    ctx->pc = 0x29A504u;
    {
        const bool branch_taken_0x29a504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a504) {
            ctx->pc = 0x29A428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a428;
        }
    }
    ctx->pc = 0x29A50Cu;
label_29a50c:
    // 0x29a50c: 0xc0a6b80  jal         func_29AE00
    ctx->pc = 0x29A50Cu;
    SET_GPR_U32(ctx, 31, 0x29A514u);
    ctx->pc = 0x29A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A50Cu;
    // 0x29a510: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AE00u, 0x29A50Cu, 0x29A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A514u;
label_29a514:
    // 0x29a514: 0xc0a6b98  jal         func_29AE60
    ctx->pc = 0x29A514u;
    SET_GPR_U32(ctx, 31, 0x29A51Cu);
    ctx->pc = 0x29A518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A514u;
    // 0x29a518: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29AE60u, 0x29A514u, 0x29A51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A51Cu;
label_29a51c:
    // 0x29a51c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a51cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a520: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29a520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29a524: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x29a524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a528: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x29a528u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29a52c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x29a52cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a530: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x29a530u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29a534: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29a534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29a538: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x29a538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29a53c: 0x3e00008  jr          $ra
    ctx->pc = 0x29A53Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A53Cu;
        // 0x29a540: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A53Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A544u;
    // 0x29a544: 0x0  nop
    ctx->pc = 0x29a544u;
    // NOP
    ctx->pc = 0x29a548u;
}
