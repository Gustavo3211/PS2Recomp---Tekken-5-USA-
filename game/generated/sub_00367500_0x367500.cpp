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

// Function: sub_00367500
// Address: 0x367500 - 0x3676d0
void sub_00367500_0x367500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367500_0x367500");
#endif

    switch (ctx->pc) {
        case 0x367530u: goto label_367530;
        case 0x3675d4u: goto label_3675d4;
        case 0x3675e0u: goto label_3675e0;
        case 0x3675ecu: goto label_3675ec;
        case 0x3675f8u: goto label_3675f8;
        case 0x367604u: goto label_367604;
        case 0x367620u: goto label_367620;
        case 0x367634u: goto label_367634;
        case 0x367640u: goto label_367640;
        case 0x36764cu: goto label_36764c;
        case 0x367658u: goto label_367658;
        case 0x367670u: goto label_367670;
        case 0x367678u: goto label_367678;
        default: break;
    }

    ctx->pc = 0x367500u;

    // 0x367500: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x367500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x367504: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x367504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x367508: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x367508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36750c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x36750cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x367510: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x367510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x367514: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x367514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x367518: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x367518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x36751c: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x36751cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x367520: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x367520u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x367524: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x367524u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x367528: 0xc0d60f4  jal         func_3583D0
    ctx->pc = 0x367528u;
    SET_GPR_U32(ctx, 31, 0x367530u);
    ctx->pc = 0x36752Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367528u;
    // 0x36752c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3583D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3583D0u, 0x367528u, 0x367530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367530u;
label_367530:
    // 0x367530: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x367530u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367534: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x367534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x367538: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x367538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36753c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x36753cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367540: 0x45030039  bc1tl       . + 4 + (0x39 << 2)
    ctx->pc = 0x367540u;
    {
        const bool branch_taken_0x367540 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367540) {
            ctx->pc = 0x367544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367540u;
            // 0x367544: 0xc68c0008  lwc1        $f12, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x367628u;
            goto label_367628;
        }
    }
    ctx->pc = 0x367548u;
    // 0x367548: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x367548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36754c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x36754cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367550: 0x45030035  bc1tl       . + 4 + (0x35 << 2)
    ctx->pc = 0x367550u;
    {
        const bool branch_taken_0x367550 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367550) {
            ctx->pc = 0x367554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367550u;
            // 0x367554: 0xc68c0008  lwc1        $f12, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x367628u;
            goto label_367628;
        }
    }
    ctx->pc = 0x367558u;
    // 0x367558: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x367558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36755c: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x36755cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367560: 0x45030031  bc1tl       . + 4 + (0x31 << 2)
    ctx->pc = 0x367560u;
    {
        const bool branch_taken_0x367560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367560) {
            ctx->pc = 0x367564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367560u;
            // 0x367564: 0xc68c0008  lwc1        $f12, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x367628u;
            goto label_367628;
        }
    }
    ctx->pc = 0x367568u;
    // 0x367568: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x367568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36756c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x36756cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367570: 0x4503002d  bc1tl       . + 4 + (0x2D << 2)
    ctx->pc = 0x367570u;
    {
        const bool branch_taken_0x367570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367570) {
            ctx->pc = 0x367574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367570u;
            // 0x367574: 0xc68c0008  lwc1        $f12, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x367628u;
            goto label_367628;
        }
    }
    ctx->pc = 0x367578u;
    // 0x367578: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x367578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36757c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x36757cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x367580: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
    ctx->pc = 0x367580u;
    {
        const bool branch_taken_0x367580 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x367580) {
            ctx->pc = 0x367584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367580u;
            // 0x367584: 0xc68c0008  lwc1        $f12, 0x8($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x367628u;
            goto label_367628;
        }
    }
    ctx->pc = 0x367588u;
    // 0x367588: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x367588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
    // 0x36758c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36758cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x367590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x367590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367594: 0x24426428  addiu       $v0, $v0, 0x6428
    ctx->pc = 0x367594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25640));
    // 0x367598: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x367598u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x36759c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x36759cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D642Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D642Cu, _value); } while (0); }
    // 0x3675a0: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x3675a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x3675a4: 0x261079d8  addiu       $s0, $s0, 0x79D8
    ctx->pc = 0x3675a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31192));
    // 0x3675a8: 0xc6940014  lwc1        $f20, 0x14($s4)
    ctx->pc = 0x3675a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3675ac: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x3675acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D6430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D6430u, _value); } while (0); }
    // 0x3675b0: 0xc6950008  lwc1        $f21, 0x8($s4)
    ctx->pc = 0x3675b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3675b4: 0xe455000c  swc1        $f21, 0xC($v0)
    ctx->pc = 0x3675b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D6434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D6434u, _value); } while (0); }
    // 0x3675b8: 0xc696000c  lwc1        $f22, 0xC($s4)
    ctx->pc = 0x3675b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3675bc: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x3675bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D6438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D6438u, _value); } while (0); }
    // 0x3675c0: 0xc6970010  lwc1        $f23, 0x10($s4)
    ctx->pc = 0x3675c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3675c4: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x3675c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D6440u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D6440u, _value); } while (0); }
    // 0x3675c8: 0xe4570014  swc1        $f23, 0x14($v0)
    ctx->pc = 0x3675c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x1D643Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x1D643Cu, _value); } while (0); }
    // 0x3675cc: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3675CCu;
    SET_GPR_U32(ctx, 31, 0x3675D4u);
    ctx->pc = 0x3675D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675CCu;
    // 0x3675d0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3675CCu, 0x3675D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675D4u;
label_3675d4:
    // 0x3675d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3675d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675d8: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3675D8u;
    SET_GPR_U32(ctx, 31, 0x3675E0u);
    ctx->pc = 0x3675DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675D8u;
    // 0x3675dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3675D8u, 0x3675E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675E0u;
label_3675e0:
    // 0x3675e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3675e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675e4: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3675E4u;
    SET_GPR_U32(ctx, 31, 0x3675ECu);
    ctx->pc = 0x3675E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675E4u;
    // 0x3675e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3675E4u, 0x3675ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675ECu;
label_3675ec:
    // 0x3675ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3675ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675f0: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3675F0u;
    SET_GPR_U32(ctx, 31, 0x3675F8u);
    ctx->pc = 0x3675F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675F0u;
    // 0x3675f4: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3675F0u, 0x3675F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3675F8u;
label_3675f8:
    // 0x3675f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3675f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3675fc: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x3675FCu;
    SET_GPR_U32(ctx, 31, 0x367604u);
    ctx->pc = 0x367600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3675FCu;
    // 0x367600: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x3675FCu, 0x367604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367604u;
label_367604:
    // 0x367604: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x367604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367608: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x367608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36760c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36760cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367610: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x367610u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367614: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x367614u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367618: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x367618u;
    SET_GPR_U32(ctx, 31, 0x367620u);
    ctx->pc = 0x36761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367618u;
    // 0x36761c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x367618u, 0x367620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367620u;
label_367620:
    // 0x367620: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x367620u;
    {
        const bool branch_taken_0x367620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367620u;
        // 0x367624: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367620) {
            ctx->pc = 0x367688u;
            goto label_367688;
        }
    }
    ctx->pc = 0x367628u;
label_367628:
    // 0x367628: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x367628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x36762c: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x36762Cu;
    SET_GPR_U32(ctx, 31, 0x367634u);
    ctx->pc = 0x367630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36762Cu;
    // 0x367630: 0x26107990  addiu       $s0, $s0, 0x7990 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x36762Cu, 0x367634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367634u;
label_367634:
    // 0x367634: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x367634u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367638: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x367638u;
    SET_GPR_U32(ctx, 31, 0x367640u);
    ctx->pc = 0x36763Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367638u;
    // 0x36763c: 0xc68c000c  lwc1        $f12, 0xC($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x367638u, 0x367640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367640u;
label_367640:
    // 0x367640: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x367640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367644: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x367644u;
    SET_GPR_U32(ctx, 31, 0x36764Cu);
    ctx->pc = 0x367648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367644u;
    // 0x367648: 0xc68c0000  lwc1        $f12, 0x0($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x367644u, 0x36764Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36764Cu;
label_36764c:
    // 0x36764c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x36764cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367650: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x367650u;
    SET_GPR_U32(ctx, 31, 0x367658u);
    ctx->pc = 0x367654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367650u;
    // 0x367654: 0xc68c0004  lwc1        $f12, 0x4($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x367650u, 0x367658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367658u;
label_367658:
    // 0x367658: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x367658u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36765c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36765cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367660: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x367660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367664: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x367664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367668: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x367668u;
    SET_GPR_U32(ctx, 31, 0x367670u);
    ctx->pc = 0x36766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367668u;
    // 0x36766c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x367668u, 0x367670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367670u;
label_367670:
    // 0x367670: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x367670u;
    {
        const bool branch_taken_0x367670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x367674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367670u;
        // 0x367674: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367670) {
            ctx->pc = 0x3676A0u;
            goto label_3676a0;
        }
    }
    ctx->pc = 0x367678u;
label_367678:
    // 0x367678: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x367678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36767c: 0x3c01001d  lui         $at, 0x1D
    ctx->pc = 0x36767cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29 << 16));
    // 0x367680: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x367680u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x367684: 0xac206b38  sw          $zero, 0x6B38($at)
    ctx->pc = 0x367684u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 27448), GPR_U32(ctx, 0));
label_367688:
    // 0x367688: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x367688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x36768c: 0x0  nop
    ctx->pc = 0x36768cu;
    // NOP
    // 0x367690: 0x0  nop
    ctx->pc = 0x367690u;
    // NOP
    // 0x367694: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x367694u;
    {
        const bool branch_taken_0x367694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367694u;
        // 0x367698: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367694) {
            ctx->pc = 0x367678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367678;
        }
    }
    ctx->pc = 0x36769Cu;
    // 0x36769c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36769cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3676a0:
    // 0x3676a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3676a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3676a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3676a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3676a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3676a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3676ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3676acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3676b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3676b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3676b4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3676b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3676b8: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x3676b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3676bc: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x3676bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3676c0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x3676c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3676c4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x3676c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3676c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3676C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3676CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3676C8u;
        // 0x3676cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3676C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3676D0u;
}
