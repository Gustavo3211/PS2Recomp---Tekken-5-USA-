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

// Function: sub_0035C548
// Address: 0x35c548 - 0x35c958
void sub_0035C548_0x35c548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C548_0x35c548");
#endif

    switch (ctx->pc) {
        case 0x35c5b0u: goto label_35c5b0;
        case 0x35c5e0u: goto label_35c5e0;
        case 0x35c644u: goto label_35c644;
        case 0x35c650u: goto label_35c650;
        case 0x35c65cu: goto label_35c65c;
        case 0x35c68cu: goto label_35c68c;
        case 0x35c698u: goto label_35c698;
        case 0x35c6a4u: goto label_35c6a4;
        case 0x35c6bcu: goto label_35c6bc;
        case 0x35c6f0u: goto label_35c6f0;
        case 0x35c708u: goto label_35c708;
        case 0x35c760u: goto label_35c760;
        case 0x35c778u: goto label_35c778;
        case 0x35c7a4u: goto label_35c7a4;
        case 0x35c7bcu: goto label_35c7bc;
        case 0x35c8a0u: goto label_35c8a0;
        case 0x35c8acu: goto label_35c8ac;
        case 0x35c8b8u: goto label_35c8b8;
        case 0x35c914u: goto label_35c914;
        default: break;
    }

    ctx->pc = 0x35c548u;

    // 0x35c548: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x35c548u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x35c54c: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x35c54cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x35c550: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x35c550u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
    // 0x35c554: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x35c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x35c558: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x35c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x35c55c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35c55cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c560: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x35c560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x35c564: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x35c564u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c568: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x35c568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x35c56c: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x35c56cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c570: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x35c570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x35c574: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x35c574u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c578: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x35c578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x35c57c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c580: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x35c580u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x35c584: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x35c584u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x35c588: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x35c588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x35c58c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x35c58cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x35c590: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x35c590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x35c594: 0x7f403  sra         $fp, $a3, 16
    ctx->pc = 0x35c594u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 7), 16));
    // 0x35c598: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x35c598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x35c59c: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x35c59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x35c5a0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x35c5a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x35c5a4: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x35c5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
    // 0x35c5a8: 0xc0d80ca  jal         func_360328
    ctx->pc = 0x35C5A8u;
    SET_GPR_U32(ctx, 31, 0x35C5B0u);
    ctx->pc = 0x35C5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C5A8u;
    // 0x35c5ac: 0x92300005  lbu         $s0, 0x5($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360328u, 0x35C5A8u, 0x35C5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C5B0u;
label_35c5b0:
    // 0x35c5b0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x35c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x35c5b4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x35c5b4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x35c5b8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35C5B8u;
    {
        const bool branch_taken_0x35c5b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c5b8) {
            ctx->pc = 0x35C5BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C5B8u;
            // 0x35c5bc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C5C0u;
            goto label_35c5c0;
        }
    }
    ctx->pc = 0x35C5C0u;
label_35c5c0:
    // 0x35c5c0: 0x2010  mfhi        $a0
    ctx->pc = 0x35c5c0u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x35c5c4: 0x90202b  sltu        $a0, $a0, $s0
    ctx->pc = 0x35c5c4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x35c5c8: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x35C5C8u;
    {
        const bool branch_taken_0x35c5c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x35c5c8) {
            ctx->pc = 0x35C5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C5C8u;
            // 0x35c5cc: 0xc6ac0010  lwc1        $f12, 0x10($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C5F0u;
            goto label_35c5f0;
        }
    }
    ctx->pc = 0x35C5D0u;
    // 0x35c5d0: 0x92250005  lbu         $a1, 0x5($s1)
    ctx->pc = 0x35c5d0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x35c5d4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x35c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x35c5d8: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C5D8u;
    SET_GPR_U32(ctx, 31, 0x35C5E0u);
    ctx->pc = 0x35C5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C5D8u;
    // 0x35c5dc: 0x24845860  addiu       $a0, $a0, 0x5860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C5D8u, 0x35C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C5E0u;
label_35c5e0:
    // 0x35c5e0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35c5e4: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x35C5E4u;
    {
        const bool branch_taken_0x35c5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C5E4u;
        // 0x35c5e8: 0x34420018  ori         $v0, $v0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c5e4) {
            ctx->pc = 0x35C91Cu;
            goto label_35c91c;
        }
    }
    ctx->pc = 0x35C5ECu;
    // 0x35c5ec: 0x0  nop
    ctx->pc = 0x35c5ecu;
    // NOP
label_35c5f0:
    // 0x35c5f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35c5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35c5f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35c5f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c5f8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x35c5f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c5fc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x35C5FCu;
    {
        const bool branch_taken_0x35c5fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x35C600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C5FCu;
        // 0x35c600: 0x46156042  mul.s       $f1, $f12, $f21 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c5fc) {
            ctx->pc = 0x35C620u;
            goto label_35c620;
        }
    }
    ctx->pc = 0x35C604u;
    // 0x35c604: 0xc634002c  lwc1        $f20, 0x2C($s1)
    ctx->pc = 0x35c604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35c608: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x35c608u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c60c: 0x4503002e  bc1tl       . + 4 + (0x2E << 2)
    ctx->pc = 0x35C60Cu;
    {
        const bool branch_taken_0x35c60c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x35c60c) {
            ctx->pc = 0x35C610u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C60Cu;
            // 0x35c610: 0x92220011  lbu         $v0, 0x11($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C6C8u;
            goto label_35c6c8;
        }
    }
    ctx->pc = 0x35C614u;
    // 0x35c614: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35C614u;
    {
        const bool branch_taken_0x35c614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c614) {
            ctx->pc = 0x35C624u;
            goto label_35c624;
        }
    }
    ctx->pc = 0x35C61Cu;
    // 0x35c61c: 0x0  nop
    ctx->pc = 0x35c61cu;
    // NOP
label_35c620:
    // 0x35c620: 0xc634002c  lwc1        $f20, 0x2C($s1)
    ctx->pc = 0x35c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_35c624:
    // 0x35c624: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x35c624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c628: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x35C628u;
    {
        const bool branch_taken_0x35c628 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35c628) {
            ctx->pc = 0x35C62Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C628u;
            // 0x35c62c: 0xc6340028  lwc1        $f20, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C670u;
            goto label_35c670;
        }
    }
    ctx->pc = 0x35C630u;
    // 0x35c630: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x35c630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c634: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x35C634u;
    {
        const bool branch_taken_0x35c634 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35c634) {
            ctx->pc = 0x35C638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C634u;
            // 0x35c638: 0xc6340028  lwc1        $f20, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C670u;
            goto label_35c670;
        }
    }
    ctx->pc = 0x35C63Cu;
    // 0x35c63c: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x35C63Cu;
    SET_GPR_U32(ctx, 31, 0x35C644u);
    ctx->pc = 0x35C640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C63Cu;
    // 0x35c640: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x35C63Cu, 0x35C644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C644u;
label_35c644:
    // 0x35c644: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c644u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c648: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x35C648u;
    SET_GPR_U32(ctx, 31, 0x35C650u);
    ctx->pc = 0x35C64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C648u;
    // 0x35c64c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x35C648u, 0x35C650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C650u;
label_35c650:
    // 0x35c650: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c654: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x35C654u;
    SET_GPR_U32(ctx, 31, 0x35C65Cu);
    ctx->pc = 0x35C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C654u;
    // 0x35c658: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x35C654u, 0x35C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C65Cu;
label_35c65c:
    // 0x35c65c: 0x26105888  addiu       $s0, $s0, 0x5888
    ctx->pc = 0x35c65cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22664));
    // 0x35c660: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35c660u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c664: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x35C664u;
    {
        const bool branch_taken_0x35c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C664u;
        // 0x35c668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c664) {
            ctx->pc = 0x35C6ACu;
            goto label_35c6ac;
        }
    }
    ctx->pc = 0x35C66Cu;
    // 0x35c66c: 0x0  nop
    ctx->pc = 0x35c66cu;
    // NOP
label_35c670:
    // 0x35c670: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x35c670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35c674: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x35C674u;
    {
        const bool branch_taken_0x35c674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x35c674) {
            ctx->pc = 0x35C678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C674u;
            // 0x35c678: 0x92220011  lbu         $v0, 0x11($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C6C8u;
            goto label_35c6c8;
        }
    }
    ctx->pc = 0x35C67Cu;
    // 0x35c67c: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x35c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x35c680: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x35c680u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x35c684: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x35C684u;
    SET_GPR_U32(ctx, 31, 0x35C68Cu);
    ctx->pc = 0x35C688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C684u;
    // 0x35c688: 0x261058d0  addiu       $s0, $s0, 0x58D0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x35C684u, 0x35C68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C68Cu;
label_35c68c:
    // 0x35c68c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x35c68cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c690: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x35C690u;
    SET_GPR_U32(ctx, 31, 0x35C698u);
    ctx->pc = 0x35C694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C690u;
    // 0x35c694: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x35C690u, 0x35C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C698u;
label_35c698:
    // 0x35c698: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35c698u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c69c: 0xc048be8  jal         func_122FA0
    ctx->pc = 0x35C69Cu;
    SET_GPR_U32(ctx, 31, 0x35C6A4u);
    ctx->pc = 0x35C6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C69Cu;
    // 0x35c6a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x122FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122FA0u, 0x35C69Cu, 0x35C6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6A4u;
label_35c6a4:
    // 0x35c6a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35c6a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6a8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35c6a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35c6ac:
    // 0x35c6ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x35c6acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x35c6b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6b4: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C6B4u;
    SET_GPR_U32(ctx, 31, 0x35C6BCu);
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C6B4u, 0x35C6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6BCu;
label_35c6bc:
    // 0x35c6bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x35c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x35c6c0: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x35C6C0u;
    {
        const bool branch_taken_0x35c6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6C0u;
        // 0x35c6c4: 0x34420017  ori         $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6c0) {
            ctx->pc = 0x35C91Cu;
            goto label_35c91c;
        }
    }
    ctx->pc = 0x35C6C8u;
label_35c6c8:
    // 0x35c6c8: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x35C6C8u;
    {
        const bool branch_taken_0x35c6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6C8u;
        // 0x35c6cc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6c8) {
            ctx->pc = 0x35C778u;
            goto label_35c778;
        }
    }
    ctx->pc = 0x35C6D0u;
    // 0x35c6d0: 0x12720004  beq         $s3, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C6D0u;
    {
        const bool branch_taken_0x35c6d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x35C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6D0u;
        // 0x35c6d4: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6d0) {
            ctx->pc = 0x35C6E4u;
            goto label_35c6e4;
        }
    }
    ctx->pc = 0x35C6D8u;
    // 0x35c6d8: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x35c6d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x35c6dc: 0x14620027  bne         $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x35C6DCu;
    {
        const bool branch_taken_0x35c6dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x35C6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6DCu;
        // 0x35c6e0: 0x33d400ff  andi        $s4, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6dc) {
            ctx->pc = 0x35C77Cu;
            goto label_35c77c;
        }
    }
    ctx->pc = 0x35C6E4u;
label_35c6e4:
    // 0x35c6e4: 0x92240011  lbu         $a0, 0x11($s1)
    ctx->pc = 0x35c6e4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x35c6e8: 0xc0d6062  jal         func_358188
    ctx->pc = 0x35C6E8u;
    SET_GPR_U32(ctx, 31, 0x35C6F0u);
    ctx->pc = 0x35C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C6E8u;
    // 0x35c6ec: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358188u, 0x35C6E8u, 0x35C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C6F0u;
label_35c6f0:
    // 0x35c6f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35c6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c6f4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C6F4u;
    {
        const bool branch_taken_0x35c6f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C6F4u;
        // 0x35c6f8: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c6f4) {
            ctx->pc = 0x35C710u;
            goto label_35c710;
        }
    }
    ctx->pc = 0x35C6FCu;
    // 0x35c6fc: 0x92250011  lbu         $a1, 0x11($s1)
    ctx->pc = 0x35c6fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x35c700: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C700u;
    SET_GPR_U32(ctx, 31, 0x35C708u);
    ctx->pc = 0x35C704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C700u;
    // 0x35c704: 0x24845918  addiu       $a0, $a0, 0x5918 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C700u, 0x35C708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C708u;
label_35c708:
    // 0x35c708: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x35C708u;
    {
        const bool branch_taken_0x35c708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C708u;
        // 0x35c70c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c708) {
            ctx->pc = 0x35C91Cu;
            goto label_35c91c;
        }
    }
    ctx->pc = 0x35C710u;
label_35c710:
    // 0x35c710: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x35c710u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x35c714: 0x14520014  bne         $v0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x35C714u;
    {
        const bool branch_taken_0x35c714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x35C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C714u;
        // 0x35c718: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c714) {
            ctx->pc = 0x35C768u;
            goto label_35c768;
        }
    }
    ctx->pc = 0x35C71Cu;
    // 0x35c71c: 0x8f82c7d8  lw          $v0, -0x3828($gp)
    ctx->pc = 0x35c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952920)));
    // 0x35c720: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35C720u;
    {
        const bool branch_taken_0x35c720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C720u;
        // 0x35c724: 0x93b70008  lbu         $s7, 0x8($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c720) {
            ctx->pc = 0x35C778u;
            goto label_35c778;
        }
    }
    ctx->pc = 0x35C728u;
    // 0x35c728: 0x2788c7e0  addiu       $t0, $gp, -0x3820
    ctx->pc = 0x35c728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294952928));
    // 0x35c72c: 0x85070000  lh          $a3, 0x0($t0)
    ctx->pc = 0x35c72cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35c730: 0x56e70003  bnel        $s7, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x35C730u;
    {
        const bool branch_taken_0x35c730 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 7));
        if (branch_taken_0x35c730) {
            ctx->pc = 0x35C734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C730u;
            // 0x35c734: 0x85080002  lh          $t0, 0x2($t0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C740u;
            goto label_35c740;
        }
    }
    ctx->pc = 0x35C738u;
    // 0x35c738: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x35C738u;
    {
        const bool branch_taken_0x35c738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C738u;
        // 0x35c73c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c738) {
            ctx->pc = 0x35C778u;
            goto label_35c778;
        }
    }
    ctx->pc = 0x35C740u;
label_35c740:
    // 0x35c740: 0x56e80003  bnel        $s7, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35C740u;
    {
        const bool branch_taken_0x35c740 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 8));
        if (branch_taken_0x35c740) {
            ctx->pc = 0x35C744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C740u;
            // 0x35c744: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C750u;
            goto label_35c750;
        }
    }
    ctx->pc = 0x35C748u;
    // 0x35c748: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x35C748u;
    {
        const bool branch_taken_0x35c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C748u;
        // 0x35c74c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c748) {
            ctx->pc = 0x35C778u;
            goto label_35c778;
        }
    }
    ctx->pc = 0x35C750u;
label_35c750:
    // 0x35c750: 0x92250011  lbu         $a1, 0x11($s1)
    ctx->pc = 0x35c750u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x35c754: 0x24845948  addiu       $a0, $a0, 0x5948
    ctx->pc = 0x35c754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22856));
    // 0x35c758: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C758u;
    SET_GPR_U32(ctx, 31, 0x35C760u);
    ctx->pc = 0x35C75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C758u;
    // 0x35c75c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C758u, 0x35C760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C760u;
label_35c760:
    // 0x35c760: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x35C760u;
    {
        const bool branch_taken_0x35c760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C760u;
        // 0x35c764: 0x33d400ff  andi        $s4, $fp, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c760) {
            ctx->pc = 0x35C77Cu;
            goto label_35c77c;
        }
    }
    ctx->pc = 0x35C768u;
label_35c768:
    // 0x35c768: 0x92250011  lbu         $a1, 0x11($s1)
    ctx->pc = 0x35c768u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x35c76c: 0x97a60006  lhu         $a2, 0x6($sp)
    ctx->pc = 0x35c76cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x35c770: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x35C770u;
    SET_GPR_U32(ctx, 31, 0x35C778u);
    ctx->pc = 0x35C774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C770u;
    // 0x35c774: 0x24845990  addiu       $a0, $a0, 0x5990 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x35C770u, 0x35C778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C778u;
label_35c778:
    // 0x35c778: 0x33d400ff  andi        $s4, $fp, 0xFF
    ctx->pc = 0x35c778u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
label_35c77c:
    // 0x35c77c: 0x7c20001  bltzl       $fp, . + 4 + (0x1 << 2)
    ctx->pc = 0x35C77Cu;
    {
        const bool branch_taken_0x35c77c = (GPR_S32(ctx, 30) < 0);
        if (branch_taken_0x35c77c) {
            ctx->pc = 0x35C780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C77Cu;
            // 0x35c780: 0x92340004  lbu         $s4, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C784u;
            goto label_35c784;
        }
    }
    ctx->pc = 0x35C784u;
label_35c784:
    // 0x35c784: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x35c784u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35c788: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x35c788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x35c78c: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x35C78Cu;
    {
        const bool branch_taken_0x35c78c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x35c78c) {
            ctx->pc = 0x35C790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C78Cu;
            // 0x35c790: 0x82320003  lb          $s2, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C794u;
            goto label_35c794;
        }
    }
    ctx->pc = 0x35C794u;
label_35c794:
    // 0x35c794: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x35c794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c798: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x35c798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c79c: 0xc0d6f5e  jal         func_35BD78
    ctx->pc = 0x35C79Cu;
    SET_GPR_U32(ctx, 31, 0x35C7A4u);
    ctx->pc = 0x35C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C79Cu;
    // 0x35c7a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35BD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35BD78u, 0x35C79Cu, 0x35C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7A4u;
label_35c7a4:
    // 0x35c7a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x35c7a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c7a8: 0x660005d  bltz        $s3, . + 4 + (0x5D << 2)
    ctx->pc = 0x35C7A8u;
    {
        const bool branch_taken_0x35c7a8 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x35C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C7A8u;
        // 0x35c7ac: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c7a8) {
            ctx->pc = 0x35C920u;
            goto label_35c920;
        }
    }
    ctx->pc = 0x35C7B0u;
    // 0x35c7b0: 0xaeb30000  sw          $s3, 0x0($s5)
    ctx->pc = 0x35c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 19));
    // 0x35c7b4: 0xc0d707a  jal         func_35C1E8
    ctx->pc = 0x35C7B4u;
    SET_GPR_U32(ctx, 31, 0x35C7BCu);
    ctx->pc = 0x35C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C7B4u;
    // 0x35c7b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C1E8u, 0x35C7B4u, 0x35C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C7BCu;
label_35c7bc:
    // 0x35c7bc: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x35c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x35c7c0: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x35c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x35c7c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x35c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35c7c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35c7cc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x35c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35c7d0: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x35c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x35c7d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x35c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x35c7d8: 0x3c10001d  lui         $s0, 0x1D
    ctx->pc = 0x35c7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)29 << 16));
    // 0x35c7dc: 0x26101378  addiu       $s0, $s0, 0x1378
    ctx->pc = 0x35c7dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4984));
    // 0x35c7e0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x35c7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x35c7e4: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x35c7e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x35c7e8: 0xa2120003  sb          $s2, 0x3($s0)
    ctx->pc = 0x35c7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 18));
    // 0x35c7ec: 0xa2140008  sb          $s4, 0x8($s0)
    ctx->pc = 0x35c7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 20));
    // 0x35c7f0: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x35c7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x35c7f4: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x35c7f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x35c7f8: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x35c7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x35c7fc: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x35c7fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x35c800: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x35c800u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x35c804: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x35c804u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
    // 0x35c808: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x35c808u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    // 0x35c80c: 0x92230012  lbu         $v1, 0x12($s1)
    ctx->pc = 0x35c80cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x35c810: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x35c810u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x35c814: 0xc6200044  lwc1        $f0, 0x44($s1)
    ctx->pc = 0x35c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c818: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x35c818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x35c81c: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x35c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35c820: 0xe6010010  swc1        $f1, 0x10($s0)
    ctx->pc = 0x35c820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x35c824: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x35c824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35c828: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x35c828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x35c82c: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x35c82cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x35c830: 0xa6020030  sh          $v0, 0x30($s0)
    ctx->pc = 0x35c830u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 48), (uint16_t)GPR_U32(ctx, 2));
    // 0x35c834: 0x96230032  lhu         $v1, 0x32($s1)
    ctx->pc = 0x35c834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
    // 0x35c838: 0xa6030032  sh          $v1, 0x32($s0)
    ctx->pc = 0x35c838u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 50), (uint16_t)GPR_U32(ctx, 3));
    // 0x35c83c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x35c83cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x35c840: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x35c840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x35c844: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x35C844u;
    {
        const bool branch_taken_0x35c844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35c844) {
            ctx->pc = 0x35C848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35C844u;
            // 0x35c848: 0xa2000009  sb          $zero, 0x9($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35C850u;
            goto label_35c850;
        }
    }
    ctx->pc = 0x35C84Cu;
    // 0x35c84c: 0xa2040009  sb          $a0, 0x9($s0)
    ctx->pc = 0x35c84cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 4));
label_35c850:
    // 0x35c850: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x35c850u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x35c854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x35c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x35c858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35c85c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C85Cu;
    {
        const bool branch_taken_0x35c85c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C85Cu;
        // 0x35c860: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c85c) {
            ctx->pc = 0x35C870u;
            goto label_35c870;
        }
    }
    ctx->pc = 0x35C864u;
    // 0x35c864: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35C864u;
    {
        const bool branch_taken_0x35c864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C864u;
        // 0x35c868: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c864) {
            ctx->pc = 0x35C874u;
            goto label_35c874;
        }
    }
    ctx->pc = 0x35C86Cu;
    // 0x35c86c: 0x0  nop
    ctx->pc = 0x35c86cu;
    // NOP
label_35c870:
    // 0x35c870: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x35c870u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
label_35c874:
    // 0x35c874: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x35c874u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x35c878: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x35c878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x35c87c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35C87Cu;
    {
        const bool branch_taken_0x35c87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C87Cu;
        // 0x35c880: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c87c) {
            ctx->pc = 0x35C890u;
            goto label_35c890;
        }
    }
    ctx->pc = 0x35C884u;
    // 0x35c884: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x35C884u;
    {
        const bool branch_taken_0x35c884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C884u;
        // 0x35c888: 0xa202000a  sb          $v0, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c884) {
            ctx->pc = 0x35C894u;
            goto label_35c894;
        }
    }
    ctx->pc = 0x35C88Cu;
    // 0x35c88c: 0x0  nop
    ctx->pc = 0x35c88cu;
    // NOP
label_35c890:
    // 0x35c890: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x35c890u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
label_35c894:
    // 0x35c894: 0xa6170024  sh          $s7, 0x24($s0)
    ctx->pc = 0x35c894u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 23));
    // 0x35c898: 0xc0d8206  jal         func_360818
    ctx->pc = 0x35C898u;
    SET_GPR_U32(ctx, 31, 0x35C8A0u);
    ctx->pc = 0x35C89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C898u;
    // 0x35c89c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360818u, 0x35C898u, 0x35C8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8A0u;
label_35c8a0:
    // 0x35c8a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8a4: 0xc0d8254  jal         func_360950
    ctx->pc = 0x35C8A4u;
    SET_GPR_U32(ctx, 31, 0x35C8ACu);
    ctx->pc = 0x35C8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8A4u;
    // 0x35c8a8: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x360950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360950u, 0x35C8A4u, 0x35C8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8ACu;
label_35c8ac:
    // 0x35c8ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35c8acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8b0: 0xc0d8100  jal         func_360400
    ctx->pc = 0x35C8B0u;
    SET_GPR_U32(ctx, 31, 0x35C8B8u);
    ctx->pc = 0x35C8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C8B0u;
    // 0x35c8b4: 0xa602001c  sh          $v0, 0x1C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360400u, 0x35C8B0u, 0x35C8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C8B8u;
label_35c8b8:
    // 0x35c8b8: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x35c8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x35c8bc: 0xa602001e  sh          $v0, 0x1E($s0)
    ctx->pc = 0x35c8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 30), (uint16_t)GPR_U32(ctx, 2));
    // 0x35c8c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x35c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c8c4: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x35c8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35c8c8: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x35c8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35c8cc: 0x6aa3000f  ldl         $v1, 0xF($s5)
    ctx->pc = 0x35c8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35c8d0: 0x6ea30008  ldr         $v1, 0x8($s5)
    ctx->pc = 0x35c8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35c8d4: 0x6aa50017  ldl         $a1, 0x17($s5)
    ctx->pc = 0x35c8d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35c8d8: 0x6ea50010  ldr         $a1, 0x10($s5)
    ctx->pc = 0x35c8d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x35c8dc: 0x6aa6001f  ldl         $a2, 0x1F($s5)
    ctx->pc = 0x35c8dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x35c8e0: 0x6ea60018  ldr         $a2, 0x18($s5)
    ctx->pc = 0x35c8e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x35c8e4: 0xb202004f  sdl         $v0, 0x4F($s0)
    ctx->pc = 0x35c8e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c8e8: 0xb6020048  sdr         $v0, 0x48($s0)
    ctx->pc = 0x35c8e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c8ec: 0xb2030057  sdl         $v1, 0x57($s0)
    ctx->pc = 0x35c8ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c8f0: 0xb6030050  sdr         $v1, 0x50($s0)
    ctx->pc = 0x35c8f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c8f4: 0xb205005f  sdl         $a1, 0x5F($s0)
    ctx->pc = 0x35c8f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c8f8: 0xb6050058  sdr         $a1, 0x58($s0)
    ctx->pc = 0x35c8f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c8fc: 0xb2060067  sdl         $a2, 0x67($s0)
    ctx->pc = 0x35c8fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c900: 0xb6060060  sdr         $a2, 0x60($s0)
    ctx->pc = 0x35c900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35c904: 0x8ea20020  lw          $v0, 0x20($s5)
    ctx->pc = 0x35c904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x35c908: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x35c908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x35c90c: 0xc0d7278  jal         func_35C9E0
    ctx->pc = 0x35C90Cu;
    SET_GPR_U32(ctx, 31, 0x35C914u);
    ctx->pc = 0x35C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C90Cu;
    // 0x35c910: 0xa2000026  sb          $zero, 0x26($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C9E0u, 0x35C90Cu, 0x35C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C914u;
label_35c914:
    // 0x35c914: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x35c914u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x35c918: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35c918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c91c:
    // 0x35c91c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x35c91cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_35c920:
    // 0x35c920: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x35c920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35c924: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x35c924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35c928: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x35c928u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x35c92c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x35c92cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35c930: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x35c930u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x35c934: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x35c934u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35c938: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x35c938u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x35c93c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x35c93cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35c940: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x35c940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x35c944: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x35c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x35c948: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x35c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x35c94c: 0x3e00008  jr          $ra
    ctx->pc = 0x35C94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C94Cu;
        // 0x35c950: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C94Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C954u;
    // 0x35c954: 0x0  nop
    ctx->pc = 0x35c954u;
    // NOP
    ctx->pc = 0x35c958u;
}
