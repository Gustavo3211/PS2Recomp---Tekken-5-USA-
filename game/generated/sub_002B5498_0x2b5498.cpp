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

// Function: sub_002B5498
// Address: 0x2b5498 - 0x2b57a0
void sub_002B5498_0x2b5498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5498_0x2b5498");
#endif

    switch (ctx->pc) {
        case 0x2b54c0u: goto label_2b54c0;
        case 0x2b54ecu: goto label_2b54ec;
        case 0x2b54f8u: goto label_2b54f8;
        case 0x2b5508u: goto label_2b5508;
        case 0x2b5518u: goto label_2b5518;
        case 0x2b555cu: goto label_2b555c;
        case 0x2b5590u: goto label_2b5590;
        case 0x2b55c4u: goto label_2b55c4;
        case 0x2b55e0u: goto label_2b55e0;
        case 0x2b5610u: goto label_2b5610;
        case 0x2b5658u: goto label_2b5658;
        case 0x2b5664u: goto label_2b5664;
        case 0x2b5678u: goto label_2b5678;
        case 0x2b5688u: goto label_2b5688;
        case 0x2b56ccu: goto label_2b56cc;
        case 0x2b5700u: goto label_2b5700;
        case 0x2b5734u: goto label_2b5734;
        case 0x2b5750u: goto label_2b5750;
        case 0x2b5780u: goto label_2b5780;
        default: break;
    }

    ctx->pc = 0x2b5498u;

    // 0x2b5498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b549c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b549cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b54a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b54a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b54a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b54a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b54ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b54acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b54b0: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2b54b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b54b4: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2b54b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b54b8: 0xc0aa0f2  jal         func_2A83C8
    ctx->pc = 0x2B54B8u;
    SET_GPR_U32(ctx, 31, 0x2B54C0u);
    ctx->pc = 0x2B54BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54B8u;
    // 0x2b54bc: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A83C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A83C8u, 0x2B54B8u, 0x2B54C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54C0u;
label_2b54c0:
    // 0x2b54c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b54c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b54c4: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2b54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b54c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b54c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b54cc: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2b54ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2b54d0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b54d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b54d4: 0xc44f0054  lwc1        $f15, 0x54($v0)
    ctx->pc = 0x2b54d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2b54d8: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x2b54d8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x2b54dc: 0xc44e0050  lwc1        $f14, 0x50($v0)
    ctx->pc = 0x2b54dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2b54e0: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x2b54e0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
    // 0x2b54e4: 0xc0c689c  jal         func_31A270
    ctx->pc = 0x2B54E4u;
    SET_GPR_U32(ctx, 31, 0x2B54ECu);
    ctx->pc = 0x2B54E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54E4u;
    // 0x2b54e8: 0x460e7380  add.s       $f14, $f14, $f14 (Delay Slot)
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A270u, 0x2B54E4u, 0x2B54ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54ECu;
label_2b54ec:
    // 0x2b54ec: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x2b54ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
    // 0x2b54f0: 0xc0aa5be  jal         func_2A96F8
    ctx->pc = 0x2B54F0u;
    SET_GPR_U32(ctx, 31, 0x2B54F8u);
    ctx->pc = 0x2B54F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B54F0u;
    // 0x2b54f4: 0x8e04008c  lw          $a0, 0x8C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96F8u, 0x2B54F0u, 0x2B54F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B54F8u;
label_2b54f8:
    // 0x2b54f8: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b54f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b54fc: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B54FCu;
    {
        const bool branch_taken_0x2b54fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b54fc) {
            ctx->pc = 0x2B5500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B54FCu;
            // 0x2b5500: 0x8e05009c  lw          $a1, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B552Cu;
            goto label_2b552c;
        }
    }
    ctx->pc = 0x2B5504u;
    // 0x2b5504: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2b5504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2b5508:
    // 0x2b5508: 0x1121c0  sll         $a0, $s1, 7
    ctx->pc = 0x2b5508u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 7));
    // 0x2b550c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b550cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2b5510: 0xc0aa7f8  jal         func_2A9FE0
    ctx->pc = 0x2B5510u;
    SET_GPR_U32(ctx, 31, 0x2B5518u);
    ctx->pc = 0x2B5514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5510u;
    // 0x2b5514: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9FE0u, 0x2B5510u, 0x2B5518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5518u;
label_2b5518:
    // 0x2b5518: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x2b5518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2b551c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2b551cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5520: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5520u;
    {
        const bool branch_taken_0x2b5520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5520) {
            ctx->pc = 0x2B5524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5520u;
            // 0x2b5524: 0x8e020098  lw          $v0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5508;
        }
    }
    ctx->pc = 0x2B5528u;
    // 0x2b5528: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x2b5528u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_2b552c:
    // 0x2b552c: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2b552cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2b5530: 0x2622ce50  addiu       $v0, $s1, -0x31B0
    ctx->pc = 0x2b5530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954576));
    // 0x2b5534: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2b5534u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BCE68u));
    // 0x2b5538: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2b5538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2b553c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b553cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b5540: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5540u;
    {
        const bool branch_taken_0x2b5540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5540) {
            ctx->pc = 0x2B5544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5540u;
            // 0x2b5544: 0xc4b50054  lwc1        $f21, 0x54($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5568u;
            goto label_2b5568;
        }
    }
    ctx->pc = 0x2B5548u;
    // 0x2b5548: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b554c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5550: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b5550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b5554: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2B5554u;
    SET_GPR_U32(ctx, 31, 0x2B555Cu);
    ctx->pc = 0x2B5558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5554u;
    // 0x2b5558: 0x8ca40054  lw          $a0, 0x54($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2B5554u, 0x2B555Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B555Cu;
label_2b555c:
    // 0x2b555c: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x2b555cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2b5560: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b5560u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b5564: 0x2622ce50  addiu       $v0, $s1, -0x31B0
    ctx->pc = 0x2b5564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954576));
label_2b5568:
    // 0x2b5568: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2b5568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2b556c: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2b556cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b5570: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b5570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b5574: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B5574u;
    {
        const bool branch_taken_0x2b5574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5574) {
            ctx->pc = 0x2B5578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5574u;
            // 0x2b5578: 0xc4b40058  lwc1        $f20, 0x58($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5598u;
            goto label_2b5598;
        }
    }
    ctx->pc = 0x2B557Cu;
    // 0x2b557c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b557cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b5580: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b5580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5584: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b5584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b5588: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2B5588u;
    SET_GPR_U32(ctx, 31, 0x2B5590u);
    ctx->pc = 0x2B558Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5588u;
    // 0x2b558c: 0x8ca40058  lw          $a0, 0x58($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2B5588u, 0x2B5590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5590u;
label_2b5590:
    // 0x2b5590: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x2b5590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x2b5594: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b5594u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b5598:
    // 0x2b5598: 0x2622ce50  addiu       $v0, $s1, -0x31B0
    ctx->pc = 0x2b5598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954576));
    // 0x2b559c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2b559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2b55a0: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2b55a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b55a4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b55a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b55a8: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B55A8u;
    {
        const bool branch_taken_0x2b55a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b55a8) {
            ctx->pc = 0x2B55ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B55A8u;
            // 0x2b55ac: 0xc4a0005c  lwc1        $f0, 0x5C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B55D0u;
            goto label_2b55d0;
        }
    }
    ctx->pc = 0x2B55B0u;
    // 0x2b55b0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b55b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b55b4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b55b8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b55b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b55bc: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2B55BCu;
    SET_GPR_U32(ctx, 31, 0x2B55C4u);
    ctx->pc = 0x2B55C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55BCu;
    // 0x2b55c0: 0x8ca4005c  lw          $a0, 0x5C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2B55BCu, 0x2B55C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55C4u;
label_2b55c4:
    // 0x2b55c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B55C4u;
    {
        const bool branch_taken_0x2b55c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B55C4u;
        // 0x2b55c8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b55c4) {
            ctx->pc = 0x2B55D4u;
            goto label_2b55d4;
        }
    }
    ctx->pc = 0x2B55CCu;
    // 0x2b55cc: 0x0  nop
    ctx->pc = 0x2b55ccu;
    // NOP
label_2b55d0:
    // 0x2b55d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b55d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b55d4:
    // 0x2b55d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b55d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b55d8: 0xc0ca532  jal         func_3294C8
    ctx->pc = 0x2B55D8u;
    SET_GPR_U32(ctx, 31, 0x2B55E0u);
    ctx->pc = 0x2B55DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B55D8u;
    // 0x2b55dc: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3294C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3294C8u, 0x2B55D8u, 0x2B55E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B55E0u;
label_2b55e0:
    // 0x2b55e0: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2b55e0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b55e4: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2b55e4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b55e8: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2b55e8u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b55ec: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2b55ecu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b55f0: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2b55f0u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2b55f4: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2b55f4u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2b55f8: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2b55f8u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b55fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b55fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5604: 0x8c8500ac  lw          $a1, 0xAC($a0)
    ctx->pc = 0x2b5604u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x2b5608: 0xc0ad5e8  jal         func_2B57A0
    ctx->pc = 0x2B5608u;
    SET_GPR_U32(ctx, 31, 0x2B5610u);
    ctx->pc = 0x2B560Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5608u;
    // 0x2b560c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B57A0u, 0x2B5608u, 0x2B5610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5610u;
label_2b5610:
    // 0x2b5610: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5610u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5614: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5614u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5618: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b561c: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2b561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b5620: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2b5620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b5624: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5624u;
        // 0x2b5628: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B562Cu;
    // 0x2b562c: 0x0  nop
    ctx->pc = 0x2b562cu;
    // NOP
    // 0x2b5630: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5638: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b5638u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b563c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5640: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5640u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5648: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2b5648u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2b564c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2b564cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2b5650: 0xc0aa0f2  jal         func_2A83C8
    ctx->pc = 0x2B5650u;
    SET_GPR_U32(ctx, 31, 0x2B5658u);
    ctx->pc = 0x2B5654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5650u;
    // 0x2b5654: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A83C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A83C8u, 0x2B5650u, 0x2B5658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5658u;
label_2b5658:
    // 0x2b5658: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x2b5658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x2b565c: 0xc0aa5be  jal         func_2A96F8
    ctx->pc = 0x2B565Cu;
    SET_GPR_U32(ctx, 31, 0x2B5664u);
    ctx->pc = 0x2B5660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B565Cu;
    // 0x2b5660: 0x8e24008c  lw          $a0, 0x8C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A96F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A96F8u, 0x2B565Cu, 0x2B5664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5664u;
label_2b5664:
    // 0x2b5664: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2b5664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2b5668: 0x5840000c  blezl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B5668u;
    {
        const bool branch_taken_0x2b5668 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5668) {
            ctx->pc = 0x2B566Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5668u;
            // 0x2b566c: 0x8e25009c  lw          $a1, 0x9C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B569Cu;
            goto label_2b569c;
        }
    }
    ctx->pc = 0x2B5670u;
    // 0x2b5670: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x2b5670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x2b5674: 0x0  nop
    ctx->pc = 0x2b5674u;
    // NOP
label_2b5678:
    // 0x2b5678: 0x1021c0  sll         $a0, $s0, 7
    ctx->pc = 0x2b5678u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 7));
    // 0x2b567c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b567cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2b5680: 0xc0aa7f8  jal         func_2A9FE0
    ctx->pc = 0x2B5680u;
    SET_GPR_U32(ctx, 31, 0x2B5688u);
    ctx->pc = 0x2B5684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5680u;
    // 0x2b5684: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9FE0u, 0x2B5680u, 0x2B5688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5688u;
label_2b5688:
    // 0x2b5688: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2b5688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2b568c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2b568cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b5690: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2B5690u;
    {
        const bool branch_taken_0x2b5690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b5690) {
            ctx->pc = 0x2B5694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5690u;
            // 0x2b5694: 0x8e220098  lw          $v0, 0x98($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b5678;
        }
    }
    ctx->pc = 0x2B5698u;
    // 0x2b5698: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x2b5698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_2b569c:
    // 0x2b569c: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x2b569cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x2b56a0: 0x2602ce50  addiu       $v0, $s0, -0x31B0
    ctx->pc = 0x2b56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954576));
    // 0x2b56a4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x2b56a4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BCE68u));
    // 0x2b56a8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2b56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2b56ac: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b56acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b56b0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B56B0u;
    {
        const bool branch_taken_0x2b56b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b56b0) {
            ctx->pc = 0x2B56B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B56B0u;
            // 0x2b56b4: 0xc4b50054  lwc1        $f21, 0x54($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B56D8u;
            goto label_2b56d8;
        }
    }
    ctx->pc = 0x2B56B8u;
    // 0x2b56b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b56b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b56bc: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b56bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b56c0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b56c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b56c4: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2B56C4u;
    SET_GPR_U32(ctx, 31, 0x2B56CCu);
    ctx->pc = 0x2B56C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56C4u;
    // 0x2b56c8: 0x8ca40054  lw          $a0, 0x54($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2B56C4u, 0x2B56CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B56CCu;
label_2b56cc:
    // 0x2b56cc: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x2b56ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2b56d0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2b56d0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2b56d4: 0x2602ce50  addiu       $v0, $s0, -0x31B0
    ctx->pc = 0x2b56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954576));
label_2b56d8:
    // 0x2b56d8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2b56d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2b56dc: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x2b56dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b56e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b56e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b56e4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B56E4u;
    {
        const bool branch_taken_0x2b56e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b56e4) {
            ctx->pc = 0x2B56E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B56E4u;
            // 0x2b56e8: 0xc4b40058  lwc1        $f20, 0x58($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5708u;
            goto label_2b5708;
        }
    }
    ctx->pc = 0x2B56ECu;
    // 0x2b56ec: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b56ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b56f0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b56f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b56f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b56f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b56f8: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2B56F8u;
    SET_GPR_U32(ctx, 31, 0x2B5700u);
    ctx->pc = 0x2B56FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B56F8u;
    // 0x2b56fc: 0x8ca40058  lw          $a0, 0x58($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2B56F8u, 0x2B5700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5700u;
label_2b5700:
    // 0x2b5700: 0x8e25009c  lw          $a1, 0x9C($s1)
    ctx->pc = 0x2b5700u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x2b5704: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b5704u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2b5708:
    // 0x2b5708: 0x2602ce50  addiu       $v0, $s0, -0x31B0
    ctx->pc = 0x2b5708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954576));
    // 0x2b570c: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2b570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2b5710: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x2b5710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2b5714: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2b5714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2b5718: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B5718u;
    {
        const bool branch_taken_0x2b5718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5718) {
            ctx->pc = 0x2B571Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B5718u;
            // 0x2b571c: 0xc4a0005c  lwc1        $f0, 0x5C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B5740u;
            goto label_2b5740;
        }
    }
    ctx->pc = 0x2B5720u;
    // 0x2b5720: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b5720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2b5724: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x2b5724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2b5728: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2b5728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2b572c: 0xc0aa636  jal         func_2A98D8
    ctx->pc = 0x2B572Cu;
    SET_GPR_U32(ctx, 31, 0x2B5734u);
    ctx->pc = 0x2B5730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B572Cu;
    // 0x2b5730: 0x8ca4005c  lw          $a0, 0x5C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A98D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A98D8u, 0x2B572Cu, 0x2B5734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5734u;
label_2b5734:
    // 0x2b5734: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5734u;
    {
        const bool branch_taken_0x2b5734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5734u;
        // 0x2b5738: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5734) {
            ctx->pc = 0x2B5744u;
            goto label_2b5744;
        }
    }
    ctx->pc = 0x2B573Cu;
    // 0x2b573c: 0x0  nop
    ctx->pc = 0x2b573cu;
    // NOP
label_2b5740:
    // 0x2b5740: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2b5740u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_2b5744:
    // 0x2b5744: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b5744u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2b5748: 0xc0ca532  jal         func_3294C8
    ctx->pc = 0x2B5748u;
    SET_GPR_U32(ctx, 31, 0x2B5750u);
    ctx->pc = 0x2B574Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5748u;
    // 0x2b574c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3294C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3294C8u, 0x2B5748u, 0x2B5750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5750u;
label_2b5750:
    // 0x2b5750: 0x4ae00714  vminix.yzw  $vf28, $vf0, $vf0x
    ctx->pc = 0x2b5750u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b5754: 0x4b000713  vmaxw.x     $vf28, $vf0, $vf0w
    ctx->pc = 0x2b5754u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[28] = _mm_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x2b5758: 0x4b600754  vminix.xzw  $vf29, $vf0, $vf0x
    ctx->pc = 0x2b5758u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, 0, -1); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b575c: 0x4a800753  vmaxw.y     $vf29, $vf0, $vf0w
    ctx->pc = 0x2b575cu;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[29] = _mm_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2b5760: 0x4ba00794  vminix.xyw  $vf30, $vf0, $vf0x
    ctx->pc = 0x2b5760u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, -1, -1); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2b5764: 0x4a400793  vmaxw.z     $vf30, $vf0, $vf0w
    ctx->pc = 0x2b5764u;
    { __m128 res = _mm_max_ps(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[30] = _mm_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2b5768: 0x4bff033c  vmove.xyzw  $vf31, $vf0
    ctx->pc = 0x2b5768u;
    { __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x2b576c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b576cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5770: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b5770u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5774: 0x8c8500ac  lw          $a1, 0xAC($a0)
    ctx->pc = 0x2b5774u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    // 0x2b5778: 0xc0ad5e8  jal         func_2B57A0
    ctx->pc = 0x2B5778u;
    SET_GPR_U32(ctx, 31, 0x2B5780u);
    ctx->pc = 0x2B577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5778u;
    // 0x2b577c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B57A0u, 0x2B5778u, 0x2B5780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5780u;
label_2b5780:
    // 0x2b5780: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5784: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5784u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b578c: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2b578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b5790: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2b5790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b5794: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5794u;
        // 0x2b5798: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B579Cu;
    // 0x2b579c: 0x0  nop
    ctx->pc = 0x2b579cu;
    // NOP
    ctx->pc = 0x2b57a0u;
}
