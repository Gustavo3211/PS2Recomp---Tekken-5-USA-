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

// Function: sub_002BC8C8
// Address: 0x2bc8c8 - 0x2bce30
void sub_002BC8C8_0x2bc8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BC8C8_0x2bc8c8");
#endif

    switch (ctx->pc) {
        case 0x2bc91cu: goto label_2bc91c;
        case 0x2bc928u: goto label_2bc928;
        case 0x2bc950u: goto label_2bc950;
        case 0x2bca04u: goto label_2bca04;
        case 0x2bca14u: goto label_2bca14;
        case 0x2bca28u: goto label_2bca28;
        case 0x2bca3cu: goto label_2bca3c;
        case 0x2bca50u: goto label_2bca50;
        case 0x2bca64u: goto label_2bca64;
        case 0x2bca70u: goto label_2bca70;
        case 0x2bca80u: goto label_2bca80;
        case 0x2bca8cu: goto label_2bca8c;
        case 0x2bcaa4u: goto label_2bcaa4;
        case 0x2bcab4u: goto label_2bcab4;
        case 0x2bcac4u: goto label_2bcac4;
        case 0x2bcad0u: goto label_2bcad0;
        case 0x2bcae4u: goto label_2bcae4;
        case 0x2bcaf4u: goto label_2bcaf4;
        case 0x2bcb00u: goto label_2bcb00;
        case 0x2bcb0cu: goto label_2bcb0c;
        case 0x2bcb1cu: goto label_2bcb1c;
        case 0x2bcb2cu: goto label_2bcb2c;
        case 0x2bcb38u: goto label_2bcb38;
        case 0x2bcb48u: goto label_2bcb48;
        case 0x2bcb74u: goto label_2bcb74;
        case 0x2bcb84u: goto label_2bcb84;
        case 0x2bcb90u: goto label_2bcb90;
        case 0x2bcba0u: goto label_2bcba0;
        case 0x2bcbacu: goto label_2bcbac;
        case 0x2bcbbcu: goto label_2bcbbc;
        case 0x2bcbccu: goto label_2bcbcc;
        case 0x2bcbd8u: goto label_2bcbd8;
        case 0x2bcbe8u: goto label_2bcbe8;
        case 0x2bcbf8u: goto label_2bcbf8;
        case 0x2bcc04u: goto label_2bcc04;
        case 0x2bcc10u: goto label_2bcc10;
        case 0x2bcc20u: goto label_2bcc20;
        case 0x2bcc30u: goto label_2bcc30;
        case 0x2bcc3cu: goto label_2bcc3c;
        case 0x2bcc4cu: goto label_2bcc4c;
        case 0x2bcd58u: goto label_2bcd58;
        case 0x2bcdecu: goto label_2bcdec;
        case 0x2bcdfcu: goto label_2bcdfc;
        default: break;
    }

    ctx->pc = 0x2bc8c8u;

    // 0x2bc8c8: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2bc8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2bc8cc: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x2bc8ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x2bc8d0: 0x24100016  addiu       $s0, $zero, 0x16
    ctx->pc = 0x2bc8d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2bc8d4: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x2bc8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x2bc8d8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bc8d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8dc: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x2bc8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x2bc8e0: 0x24850720  addiu       $a1, $a0, 0x720
    ctx->pc = 0x2bc8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1824));
    // 0x2bc8e4: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x2bc8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x2bc8e8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2bc8e8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc8ec: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x2bc8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x2bc8f0: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2bc8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x2bc8f4: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x2bc8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x2bc8f8: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x2bc8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x2bc8fc: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x2bc8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x2bc900: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x2bc900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x2bc904: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2bc904u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2bc908: 0x8c820894  lw          $v0, 0x894($a0)
    ctx->pc = 0x2bc908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2196)));
    // 0x2bc90c: 0x24840760  addiu       $a0, $a0, 0x760
    ctx->pc = 0x2bc90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1888));
    // 0x2bc910: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2bc910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bc914: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BC914u;
    SET_GPR_U32(ctx, 31, 0x2BC91Cu);
    ctx->pc = 0x2BC918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC914u;
    // 0x2bc918: 0xafa200f0  sw          $v0, 0xF0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BC914u, 0x2BC91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC91Cu;
label_2bc91c:
    // 0x2bc91c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2bc91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2bc920: 0x2452e0b8  addiu       $s2, $v0, -0x1F48
    ctx->pc = 0x2bc920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959288));
    // 0x2bc924: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2bc924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2bc928:
    // 0x2bc928: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x2bc928u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2bc92c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2bc92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2bc930: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2bc930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x2bc934: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2bc934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bc938: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2bc938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2bc93c: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2bc93cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2bc940: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2bc940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2bc944: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2bc944u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2bc948: 0xc097084  jal         func_25C210
    ctx->pc = 0x2BC948u;
    SET_GPR_U32(ctx, 31, 0x2BC950u);
    ctx->pc = 0x2BC94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC948u;
    // 0x2bc94c: 0x3c42021  addu        $a0, $fp, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C210u, 0x2BC948u, 0x2BC950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC950u;
label_2bc950:
    // 0x2bc950: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x2bc950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2bc954: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BC954u;
    {
        const bool branch_taken_0x2bc954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC954u;
        // 0x2bc958: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc954) {
            ctx->pc = 0x2BC928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bc928;
        }
    }
    ctx->pc = 0x2BC95Cu;
    // 0x2bc95c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2bc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2bc960: 0xc6200060  lwc1        $f0, 0x60($s1)
    ctx->pc = 0x2bc960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc964: 0x2442dff0  addiu       $v0, $v0, -0x2010
    ctx->pc = 0x2bc964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959088));
    // 0x2bc968: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc96c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2bc96cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2bc970: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x2bc970u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47DFF8u));
    // 0x2bc974: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x2bc974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x2bc978: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x2bc978u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x47DFF0u));
    // 0x2bc97c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2bc97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2bc980: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bc984: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x2bc984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x2bc988: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x2bc988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x2bc98c: 0x24c6e010  addiu       $a2, $a2, -0x1FF0
    ctx->pc = 0x2bc98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959120));
    // 0x2bc990: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2bc990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2bc994: 0x2442e020  addiu       $v0, $v0, -0x1FE0
    ctx->pc = 0x2bc994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959136));
    // 0x2bc998: 0xe7b4003c  swc1        $f20, 0x3C($sp)
    ctx->pc = 0x2bc998u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2bc99c: 0x24e7e000  addiu       $a3, $a3, -0x2000
    ctx->pc = 0x2bc99cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959104));
    // 0x2bc9a0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x2bc9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x2bc9a4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2bc9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bc9a8: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x2bc9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
    // 0x2bc9ac: 0x27d70090  addiu       $s7, $fp, 0x90
    ctx->pc = 0x2bc9acu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2bc9b0: 0xdfaa0030  ld          $t2, 0x30($sp)
    ctx->pc = 0x2bc9b0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc9b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bc9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9b8: 0xdceb0008  ld          $t3, 0x8($a3)
    ctx->pc = 0x2bc9b8u;
    SET_GPR_U64(ctx, 11, FAST_READ64(0x47E008u));
    // 0x2bc9bc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bc9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc9c0: 0xdccc0008  ld          $t4, 0x8($a2)
    ctx->pc = 0x2bc9c0u;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x47E018u));
    // 0x2bc9c4: 0x27d30120  addiu       $s3, $fp, 0x120
    ctx->pc = 0x2bc9c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), 288));
    // 0x2bc9c8: 0xdc4d0008  ld          $t5, 0x8($v0)
    ctx->pc = 0x2bc9c8u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x47E028u));
    // 0x2bc9cc: 0x27d20750  addiu       $s2, $fp, 0x750
    ctx->pc = 0x2bc9ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 1872));
    // 0x2bc9d0: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x2bc9d0u;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x47E010u));
    // 0x2bc9d4: 0xdfa80038  ld          $t0, 0x38($sp)
    ctx->pc = 0x2bc9d4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2bc9d8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x2bc9d8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x47E000u));
    // 0x2bc9dc: 0xdc470000  ld          $a3, 0x0($v0)
    ctx->pc = 0x2bc9dcu;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x47E020u));
    // 0x2bc9e0: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x2bc9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x2bc9e4: 0xffa70050  sd          $a3, 0x50($sp)
    ctx->pc = 0x2bc9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 7));
    // 0x2bc9e8: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x2bc9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x2bc9ec: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x2bc9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x2bc9f0: 0xffab0038  sd          $t3, 0x38($sp)
    ctx->pc = 0x2bc9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 11));
    // 0x2bc9f4: 0xffa90040  sd          $t1, 0x40($sp)
    ctx->pc = 0x2bc9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 9));
    // 0x2bc9f8: 0xffac0048  sd          $t4, 0x48($sp)
    ctx->pc = 0x2bc9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 12));
    // 0x2bc9fc: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x2BC9FCu;
    SET_GPR_U32(ctx, 31, 0x2BCA04u);
    ctx->pc = 0x2BCA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC9FCu;
    // 0x2bca00: 0xffad0058  sd          $t5, 0x58($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x2BC9FCu, 0x2BCA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA04u;
label_2bca04:
    // 0x2bca04: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bca08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bca08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca0c: 0xc096e12  jal         func_25B848
    ctx->pc = 0x2BCA0Cu;
    SET_GPR_U32(ctx, 31, 0x2BCA14u);
    ctx->pc = 0x2BCA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA0Cu;
    // 0x2bca10: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B848u, 0x2BCA0Cu, 0x2BCA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA14u;
label_2bca14:
    // 0x2bca14: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bca14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca18: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2bca18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bca1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bca1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca20: 0xc08491e  jal         func_212478
    ctx->pc = 0x2BCA20u;
    SET_GPR_U32(ctx, 31, 0x2BCA28u);
    ctx->pc = 0x2BCA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA20u;
    // 0x2bca24: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2BCA20u, 0x2BCA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA28u;
label_2bca28:
    // 0x2bca28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bca28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca2c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2bca2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bca30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca34: 0xc08491e  jal         func_212478
    ctx->pc = 0x2BCA34u;
    SET_GPR_U32(ctx, 31, 0x2BCA3Cu);
    ctx->pc = 0x2BCA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA34u;
    // 0x2bca38: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2BCA34u, 0x2BCA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA3Cu;
label_2bca3c:
    // 0x2bca3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bca3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca40: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x2bca40u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bca44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bca44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca48: 0xc08491e  jal         func_212478
    ctx->pc = 0x2BCA48u;
    SET_GPR_U32(ctx, 31, 0x2BCA50u);
    ctx->pc = 0x2BCA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA48u;
    // 0x2bca4c: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2BCA48u, 0x2BCA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA50u;
label_2bca50:
    // 0x2bca50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bca50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca54: 0x27b50040  addiu       $s5, $sp, 0x40
    ctx->pc = 0x2bca54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bca58: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bca58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca5c: 0xc08491e  jal         func_212478
    ctx->pc = 0x2BCA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BCA64u);
    ctx->pc = 0x2BCA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA5Cu;
    // 0x2bca60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2BCA5Cu, 0x2BCA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA64u;
label_2bca64:
    // 0x2bca64: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2bca64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bca68: 0xc0849c0  jal         func_212700
    ctx->pc = 0x2BCA68u;
    SET_GPR_U32(ctx, 31, 0x2BCA70u);
    ctx->pc = 0x2BCA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA68u;
    // 0x2bca6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212700u, 0x2BCA68u, 0x2BCA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA70u;
label_2bca70:
    // 0x2bca70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bca70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bca74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca78: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2BCA78u;
    SET_GPR_U32(ctx, 31, 0x2BCA80u);
    ctx->pc = 0x2BCA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA78u;
    // 0x2bca7c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2BCA78u, 0x2BCA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA80u;
label_2bca80:
    // 0x2bca80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bca80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca84: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCA84u;
    SET_GPR_U32(ctx, 31, 0x2BCA8Cu);
    ctx->pc = 0x2BCA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA84u;
    // 0x2bca88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCA84u, 0x2BCA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCA8Cu;
label_2bca8c:
    // 0x2bca8c: 0x7aa20000  lq          $v0, 0x0($s5)
    ctx->pc = 0x2bca8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2bca90: 0x27b200b0  addiu       $s2, $sp, 0xB0
    ctx->pc = 0x2bca90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2bca94: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bca94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bca98: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x2bca98u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
    // 0x2bca9c: 0xc084814  jal         func_212050
    ctx->pc = 0x2BCA9Cu;
    SET_GPR_U32(ctx, 31, 0x2BCAA4u);
    ctx->pc = 0x2BCAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCA9Cu;
    // 0x2bcaa0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BCA9Cu, 0x2BCAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAA4u;
label_2bcaa4:
    // 0x2bcaa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcaa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaac: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BCAACu;
    SET_GPR_U32(ctx, 31, 0x2BCAB4u);
    ctx->pc = 0x2BCAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAACu;
    // 0x2bcab0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BCAACu, 0x2BCAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAB4u;
label_2bcab4:
    // 0x2bcab4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bcab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcab8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcabc: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BCABCu;
    SET_GPR_U32(ctx, 31, 0x2BCAC4u);
    ctx->pc = 0x2BCAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCABCu;
    // 0x2bcac0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BCABCu, 0x2BCAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAC4u;
label_2bcac4:
    // 0x2bcac4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcac8: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCAC8u;
    SET_GPR_U32(ctx, 31, 0x2BCAD0u);
    ctx->pc = 0x2BCACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAC8u;
    // 0x2bcacc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCAC8u, 0x2BCAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAD0u;
label_2bcad0:
    // 0x2bcad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcad4: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2bcad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2bcad8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2bcad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcadc: 0xc08480c  jal         func_212030
    ctx->pc = 0x2BCADCu;
    SET_GPR_U32(ctx, 31, 0x2BCAE4u);
    ctx->pc = 0x2BCAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCADCu;
    // 0x2bcae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212030u, 0x2BCADCu, 0x2BCAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAE4u;
label_2bcae4:
    // 0x2bcae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcae8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2bcae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaec: 0xc08477c  jal         func_211DF0
    ctx->pc = 0x2BCAECu;
    SET_GPR_U32(ctx, 31, 0x2BCAF4u);
    ctx->pc = 0x2BCAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAECu;
    // 0x2bcaf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DF0u, 0x2BCAECu, 0x2BCAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCAF4u;
label_2bcaf4:
    // 0x2bcaf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcaf8: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCAF8u;
    SET_GPR_U32(ctx, 31, 0x2BCB00u);
    ctx->pc = 0x2BCAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCAF8u;
    // 0x2bcafc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCAF8u, 0x2BCB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB00u;
label_2bcb00:
    // 0x2bcb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb04: 0xc084814  jal         func_212050
    ctx->pc = 0x2BCB04u;
    SET_GPR_U32(ctx, 31, 0x2BCB0Cu);
    ctx->pc = 0x2BCB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB04u;
    // 0x2bcb08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BCB04u, 0x2BCB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB0Cu;
label_2bcb0c:
    // 0x2bcb0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb10: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb14: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BCB14u;
    SET_GPR_U32(ctx, 31, 0x2BCB1Cu);
    ctx->pc = 0x2BCB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB14u;
    // 0x2bcb18: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BCB14u, 0x2BCB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB1Cu;
label_2bcb1c:
    // 0x2bcb1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb24: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BCB24u;
    SET_GPR_U32(ctx, 31, 0x2BCB2Cu);
    ctx->pc = 0x2BCB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB24u;
    // 0x2bcb28: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BCB24u, 0x2BCB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB2Cu;
label_2bcb2c:
    // 0x2bcb2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb30: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCB30u;
    SET_GPR_U32(ctx, 31, 0x2BCB38u);
    ctx->pc = 0x2BCB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB30u;
    // 0x2bcb34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCB30u, 0x2BCB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB38u;
label_2bcb38:
    // 0x2bcb38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcb3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb40: 0xc08480c  jal         func_212030
    ctx->pc = 0x2BCB40u;
    SET_GPR_U32(ctx, 31, 0x2BCB48u);
    ctx->pc = 0x2BCB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB40u;
    // 0x2bcb44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212030u, 0x2BCB40u, 0x2BCB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB48u;
label_2bcb48:
    // 0x2bcb48: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x2bcb48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcb4c: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2bcb4cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bcb50: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x2bcb50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bcb54: 0x7a270000  lq          $a3, 0x0($s1)
    ctx->pc = 0x2bcb54u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcb58: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bcb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb5c: 0x7ee20000  sq          $v0, 0x0($s7)
    ctx->pc = 0x2bcb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), GPR_VEC(ctx, 2));
    // 0x2bcb60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2bcb60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb64: 0x7ee30010  sq          $v1, 0x10($s7)
    ctx->pc = 0x2bcb64u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), GPR_VEC(ctx, 3));
    // 0x2bcb68: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bcb68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb6c: 0xc08491e  jal         func_212478
    ctx->pc = 0x2BCB6Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB74u);
    ctx->pc = 0x2BCB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB6Cu;
    // 0x2bcb70: 0x7ee70020  sq          $a3, 0x20($s7) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), GPR_VEC(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x2BCB6Cu, 0x2BCB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB74u;
label_2bcb74:
    // 0x2bcb74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb78: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bcb78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb7c: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BCB7Cu;
    SET_GPR_U32(ctx, 31, 0x2BCB84u);
    ctx->pc = 0x2BCB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB7Cu;
    // 0x2bcb80: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BCB7Cu, 0x2BCB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB84u;
label_2bcb84:
    // 0x2bcb84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcb84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb88: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCB88u;
    SET_GPR_U32(ctx, 31, 0x2BCB90u);
    ctx->pc = 0x2BCB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB88u;
    // 0x2bcb8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCB88u, 0x2BCB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCB90u;
label_2bcb90:
    // 0x2bcb90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bcb94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcb98: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BCB98u;
    SET_GPR_U32(ctx, 31, 0x2BCBA0u);
    ctx->pc = 0x2BCB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCB98u;
    // 0x2bcb9c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BCB98u, 0x2BCBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBA0u;
label_2bcba0:
    // 0x2bcba0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcba4: 0xc084814  jal         func_212050
    ctx->pc = 0x2BCBA4u;
    SET_GPR_U32(ctx, 31, 0x2BCBACu);
    ctx->pc = 0x2BCBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBA4u;
    // 0x2bcba8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BCBA4u, 0x2BCBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBACu;
label_2bcbac:
    // 0x2bcbac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcbacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbb4: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BCBB4u;
    SET_GPR_U32(ctx, 31, 0x2BCBBCu);
    ctx->pc = 0x2BCBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBB4u;
    // 0x2bcbb8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BCBB4u, 0x2BCBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBBCu;
label_2bcbbc:
    // 0x2bcbbc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bcbbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbc4: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BCBC4u;
    SET_GPR_U32(ctx, 31, 0x2BCBCCu);
    ctx->pc = 0x2BCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBC4u;
    // 0x2bcbc8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BCBC4u, 0x2BCBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBCCu;
label_2bcbcc:
    // 0x2bcbcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbd0: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCBD0u;
    SET_GPR_U32(ctx, 31, 0x2BCBD8u);
    ctx->pc = 0x2BCBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBD0u;
    // 0x2bcbd4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCBD0u, 0x2BCBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBD8u;
label_2bcbd8:
    // 0x2bcbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbdc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbe0: 0xc08480c  jal         func_212030
    ctx->pc = 0x2BCBE0u;
    SET_GPR_U32(ctx, 31, 0x2BCBE8u);
    ctx->pc = 0x2BCBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBE0u;
    // 0x2bcbe4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212030u, 0x2BCBE0u, 0x2BCBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBE8u;
label_2bcbe8:
    // 0x2bcbe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcbe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbec: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2bcbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbf0: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BCBF0u;
    SET_GPR_U32(ctx, 31, 0x2BCBF8u);
    ctx->pc = 0x2BCBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBF0u;
    // 0x2bcbf4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BCBF0u, 0x2BCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCBF8u;
label_2bcbf8:
    // 0x2bcbf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bcbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcbfc: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCBFCu;
    SET_GPR_U32(ctx, 31, 0x2BCC04u);
    ctx->pc = 0x2BCC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCBFCu;
    // 0x2bcc00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCBFCu, 0x2BCC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC04u;
label_2bcc04:
    // 0x2bcc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc08: 0xc084814  jal         func_212050
    ctx->pc = 0x2BCC08u;
    SET_GPR_U32(ctx, 31, 0x2BCC10u);
    ctx->pc = 0x2BCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC08u;
    // 0x2bcc0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212050u, 0x2BCC08u, 0x2BCC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC10u;
label_2bcc10:
    // 0x2bcc10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bcc10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc18: 0xc0847a4  jal         func_211E90
    ctx->pc = 0x2BCC18u;
    SET_GPR_U32(ctx, 31, 0x2BCC20u);
    ctx->pc = 0x2BCC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC18u;
    // 0x2bcc1c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E90u, 0x2BCC18u, 0x2BCC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC20u;
label_2bcc20:
    // 0x2bcc20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc24: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bcc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc28: 0xc084784  jal         func_211E10
    ctx->pc = 0x2BCC28u;
    SET_GPR_U32(ctx, 31, 0x2BCC30u);
    ctx->pc = 0x2BCC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC28u;
    // 0x2bcc2c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x2BCC28u, 0x2BCC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC30u;
label_2bcc30:
    // 0x2bcc30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc34: 0xc0847da  jal         func_211F68
    ctx->pc = 0x2BCC34u;
    SET_GPR_U32(ctx, 31, 0x2BCC3Cu);
    ctx->pc = 0x2BCC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC34u;
    // 0x2bcc38: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211F68u, 0x2BCC34u, 0x2BCC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC3Cu;
label_2bcc3c:
    // 0x2bcc3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bcc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bcc40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcc44: 0xc08480c  jal         func_212030
    ctx->pc = 0x2BCC44u;
    SET_GPR_U32(ctx, 31, 0x2BCC4Cu);
    ctx->pc = 0x2BCC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCC44u;
    // 0x2bcc48: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212030u, 0x2BCC44u, 0x2BCC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCC4Cu;
label_2bcc4c:
    // 0x2bcc4c: 0x7bc20150  lq          $v0, 0x150($fp)
    ctx->pc = 0x2bcc4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 30), 336)));
    // 0x2bcc50: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2bcc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcc54: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2bcc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x2bcc58: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2bcc58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcc5c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2bcc5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc60: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2bcc60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2bcc64: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x2bcc64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x2bcc68: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x2bcc68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2bcc6c: 0x4601a516  rsqrt.s     $f20, $f20, $f1
    ctx->pc = 0x2bcc6cu;
    ctx->f[20] = 1.0f / sqrtf(ctx->f[20]);
    // 0x2bcc70: 0xda100000  lqc2        $vf16, 0x0($s0)
    ctx->pc = 0x2bcc70u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bcc74: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x2bcc74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bcc78: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2bcc78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bcc7c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bcc7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bcc80: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bcc80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bcc84: 0xfa700000  sqc2        $vf16, 0x0($s3)
    ctx->pc = 0x2bcc84u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bcc88: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x2bcc88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bcc8c: 0xc6650000  lwc1        $f5, 0x0($s3)
    ctx->pc = 0x2bcc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bcc90: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2bcc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bcc94: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x2bcc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bcc98: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2bcc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bcc9c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2bcc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bcca0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x2bcca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bcca4: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x2bcca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bcca8: 0x4605081a  mula.s      $f1, $f5
    ctx->pc = 0x2bcca8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x2bccac: 0x4602181e  madda.s     $f3, $f2
    ctx->pc = 0x2bccacu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[2])));
    // 0x2bccb0: 0x4600205c  madd.s      $f1, $f4, $f0
    ctx->pc = 0x2bccb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[0]));
    // 0x2bccb4: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x2bccb4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bccb8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bccb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bccbc: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bccbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bccc0: 0x4be18418  vmulx.xyzw  $vf16, $vf16, $vf1x
    ctx->pc = 0x2bccc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bccc4: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bccc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bccc8: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2bccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bcccc: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2bccccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bccd0: 0xd8700000  lqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bccd0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2bccd4: 0xd85f0000  lqc2        $vf31, 0x0($v0)
    ctx->pc = 0x2bccd4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bccd8: 0x4bff842c  vsub.xyzw   $vf16, $vf16, $vf31
    ctx->pc = 0x2bccd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[16], ctx->vu0_vf[31]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bccdc: 0xf8500000  sqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bcce0: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x2bcce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bcce4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2bcce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2bcce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bcce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bccec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2bccecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2bccf0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2bccf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bccf4: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x2bccf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bccf8: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x2bccf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bccfc: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x2bccfcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x2bcd00: 0x4602101e  madda.s     $f2, $f2
    ctx->pc = 0x2bcd00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[2])));
    // 0x2bcd04: 0x4600005c  madd.s      $f1, $f0, $f0
    ctx->pc = 0x2bcd04u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[0], ctx->f[0]));
    // 0x2bcd08: 0x460118d6  rsqrt.s     $f3, $f3, $f1
    ctx->pc = 0x2bcd08u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[3]);
    // 0x2bcd0c: 0xd8500000  lqc2        $vf16, 0x0($v0)
    ctx->pc = 0x2bcd0cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcd10: 0x4a20042c  vsub.w      $vf16, $vf0, $vf0
    ctx->pc = 0x2bcd10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bcd14: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2bcd14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bcd18: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2bcd18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2bcd1c: 0x4bc18418  vmulx.xyz   $vf16, $vf16, $vf1x
    ctx->pc = 0x2bcd1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[16], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bcd20: 0xf8900000  sqc2        $vf16, 0x0($a0)
    ctx->pc = 0x2bcd20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bcd24: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x2bcd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2bcd28: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x2bcd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2bcd2c: 0xda700000  lqc2        $vf16, 0x0($s3)
    ctx->pc = 0x2bcd2cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bcd30: 0xd8510000  lqc2        $vf17, 0x0($v0)
    ctx->pc = 0x2bcd30u;
    ctx->vu0_vf[17] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcd34: 0x4bd182fe  vopmula.xyz $ACC, $vf16, $vf17
    ctx->pc = 0x2bcd34u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2bcd38: 0x4bd08c2e  vopmsub.xyz $vf16, $vf17, $vf16
    ctx->pc = 0x2bcd38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[17], ctx->vu0_vf[17], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = _mm_blendv_ps(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x2bcd3c: 0xf8700000  sqc2        $vf16, 0x0($v1)
    ctx->pc = 0x2bcd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x2bcd40: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x2bcd40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2bcd44: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x2bcd44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2bcd48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bcd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bcd4c: 0x27c50090  addiu       $a1, $fp, 0x90
    ctx->pc = 0x2bcd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 144));
    // 0x2bcd50: 0xc084986  jal         func_212618
    ctx->pc = 0x2BCD50u;
    SET_GPR_U32(ctx, 31, 0x2BCD58u);
    ctx->pc = 0x2BCD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCD50u;
    // 0x2bcd54: 0x7e620030  sq          $v0, 0x30($s3) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212618u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212618u, 0x2BCD50u, 0x2BCD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCD58u;
label_2bcd58:
    // 0x2bcd58: 0x27c20120  addiu       $v0, $fp, 0x120
    ctx->pc = 0x2bcd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 288));
    // 0x2bcd5c: 0x7bc30150  lq          $v1, 0x150($fp)
    ctx->pc = 0x2bcd5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 336)));
    // 0x2bcd60: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x2bcd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x2bcd64: 0xda280000  lqc2        $vf8, 0x0($s1)
    ctx->pc = 0x2bcd64u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bcd68: 0xda290010  lqc2        $vf9, 0x10($s1)
    ctx->pc = 0x2bcd68u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2bcd6c: 0xda2a0020  lqc2        $vf10, 0x20($s1)
    ctx->pc = 0x2bcd6cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2bcd70: 0xda2b0030  lqc2        $vf11, 0x30($s1)
    ctx->pc = 0x2bcd70u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2bcd74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bcd74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bcd78: 0xd8450010  lqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2bcd78u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2bcd7c: 0xd8460020  lqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2bcd7cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2bcd80: 0xd8470030  lqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2bcd80u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2bcd84: 0x4be441bc  vmulax.xyzw $ACC, $vf8, $vf4x
    ctx->pc = 0x2bcd84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcd88: 0x4be448bd  vmadday.xyzw $ACC, $vf9, $vf4y
    ctx->pc = 0x2bcd88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcd8c: 0x4be450be  vmaddaz.xyzw $ACC, $vf10, $vf4z
    ctx->pc = 0x2bcd8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcd90: 0x4be4590b  vmaddw.xyzw $vf4, $vf11, $vf4w
    ctx->pc = 0x2bcd90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bcd94: 0x4be541bc  vmulax.xyzw $ACC, $vf8, $vf5x
    ctx->pc = 0x2bcd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcd98: 0x4be548bd  vmadday.xyzw $ACC, $vf9, $vf5y
    ctx->pc = 0x2bcd98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcd9c: 0x4be550be  vmaddaz.xyzw $ACC, $vf10, $vf5z
    ctx->pc = 0x2bcd9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcda0: 0x4be5594b  vmaddw.xyzw $vf5, $vf11, $vf5w
    ctx->pc = 0x2bcda0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2bcda4: 0x4be641bc  vmulax.xyzw $ACC, $vf8, $vf6x
    ctx->pc = 0x2bcda4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcda8: 0x4be648bd  vmadday.xyzw $ACC, $vf9, $vf6y
    ctx->pc = 0x2bcda8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcdac: 0x4be650be  vmaddaz.xyzw $ACC, $vf10, $vf6z
    ctx->pc = 0x2bcdacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcdb0: 0x4be6598b  vmaddw.xyzw $vf6, $vf11, $vf6w
    ctx->pc = 0x2bcdb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2bcdb4: 0x4be741bc  vmulax.xyzw $ACC, $vf8, $vf7x
    ctx->pc = 0x2bcdb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcdb8: 0x4be748bd  vmadday.xyzw $ACC, $vf9, $vf7y
    ctx->pc = 0x2bcdb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcdbc: 0x4be750be  vmaddaz.xyzw $ACC, $vf10, $vf7z
    ctx->pc = 0x2bcdbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x2bcdc0: 0x4be759cb  vmaddw.xyzw $vf7, $vf11, $vf7w
    ctx->pc = 0x2bcdc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2bcdc4: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2bcdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bcdc8: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x2bcdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x2bcdcc: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x2bcdccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x2bcdd0: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x2bcdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2bcdd4: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x2bcdd4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bcdd8: 0x27c40990  addiu       $a0, $fp, 0x990
    ctx->pc = 0x2bcdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 2448));
    // 0x2bcddc: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x2bcddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bcde0: 0x7c430030  sq          $v1, 0x30($v0)
    ctx->pc = 0x2bcde0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 3));
    // 0x2bcde4: 0xc096e12  jal         func_25B848
    ctx->pc = 0x2BCDE4u;
    SET_GPR_U32(ctx, 31, 0x2BCDECu);
    ctx->pc = 0x2BCDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDE4u;
    // 0x2bcde8: 0x24c500cc  addiu       $a1, $a2, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B848u, 0x2BCDE4u, 0x2BCDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDECu;
label_2bcdec:
    // 0x2bcdec: 0x27c40bd0  addiu       $a0, $fp, 0xBD0
    ctx->pc = 0x2bcdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 3024));
    // 0x2bcdf0: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x2bcdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bcdf4: 0xc096e12  jal         func_25B848
    ctx->pc = 0x2BCDF4u;
    SET_GPR_U32(ctx, 31, 0x2BCDFCu);
    ctx->pc = 0x2BCDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BCDF4u;
    // 0x2bcdf8: 0x244500fc  addiu       $a1, $v0, 0xFC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25B848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25B848u, 0x2BCDF4u, 0x2BCDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BCDFCu;
label_2bcdfc:
    // 0x2bcdfc: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x2bcdfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bce00: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x2bce00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2bce04: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x2bce04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bce08: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x2bce08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2bce0c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2bce0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bce10: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x2bce10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x2bce14: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x2bce14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bce18: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x2bce18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x2bce1c: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x2bce1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bce20: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x2bce20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x2bce24: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2bce24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bce28: 0x3e00008  jr          $ra
    ctx->pc = 0x2BCE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BCE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BCE28u;
        // 0x2bce2c: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BCE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BCE30u;
}
