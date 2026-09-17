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

// Function: sub_001F6960
// Address: 0x1f6960 - 0x1f6aa8
void sub_001F6960_0x1f6960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F6960_0x1f6960");
#endif

    switch (ctx->pc) {
        case 0x1f69a8u: goto label_1f69a8;
        case 0x1f69ccu: goto label_1f69cc;
        case 0x1f6a00u: goto label_1f6a00;
        case 0x1f6a10u: goto label_1f6a10;
        case 0x1f6a2cu: goto label_1f6a2c;
        case 0x1f6a40u: goto label_1f6a40;
        default: break;
    }

    ctx->pc = 0x1f6960u;

    // 0x1f6960: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f6960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f6964: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f6968: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f6968u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f696c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6978: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f6978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f697c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f697cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f6980: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f6980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f6984: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x1f6984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x1f6988: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x1F6988u;
    {
        const bool branch_taken_0x1f6988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6988u;
        // 0x1f698c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6988) {
            ctx->pc = 0x1F6A84u;
            goto label_1f6a84;
        }
    }
    ctx->pc = 0x1F6990u;
    // 0x1f6990: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x1f6990u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x1f6994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f6994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6998: 0x24150064  addiu       $s5, $zero, 0x64
    ctx->pc = 0x1f6998u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1f699c: 0x36943fff  ori         $s4, $s4, 0x3FFF
    ctx->pc = 0x1f699cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16383);
    // 0x1f69a0: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1f69a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1f69a4: 0x0  nop
    ctx->pc = 0x1f69a4u;
    // NOP
label_1f69a8:
    // 0x1f69a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1f69a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1f69ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f69acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f69b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f69b4: 0x24500834  addiu       $s0, $v0, 0x834
    ctx->pc = 0x1f69b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2100));
    // 0x1f69b8: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x1f69b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f69bc: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F69BCu;
    {
        const bool branch_taken_0x1f69bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F69C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F69BCu;
        // 0x1f69c0: 0x2451082c  addiu       $s1, $v0, 0x82C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2092));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f69bc) {
            ctx->pc = 0x1F69DCu;
            goto label_1f69dc;
        }
    }
    ctx->pc = 0x1F69C4u;
    // 0x1f69c4: 0xc09ec7c  jal         func_27B1F0
    ctx->pc = 0x1F69C4u;
    SET_GPR_U32(ctx, 31, 0x1F69CCu);
    ctx->pc = 0x27B1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B1F0u, 0x1F69C4u, 0x1F69CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F69CCu;
label_1f69cc:
    // 0x1f69cc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1f69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f69d0: 0x96050004  lhu         $a1, 0x4($s0)
    ctx->pc = 0x1f69d0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f69d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f69d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f69d8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1f69d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1f69dc:
    // 0x1f69dc: 0x30a24000  andi        $v0, $a1, 0x4000
    ctx->pc = 0x1f69dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16384);
    // 0x1f69e0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1F69E0u;
    {
        const bool branch_taken_0x1f69e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f69e0) {
            ctx->pc = 0x1F69E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F69E0u;
            // 0x1f69e4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6A18u;
            goto label_1f6a18;
        }
    }
    ctx->pc = 0x1F69E8u;
    // 0x1f69e8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f69e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f69ec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1f69ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f69f0: 0x14550005  bne         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F69F0u;
    {
        const bool branch_taken_0x1f69f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1f69f0) {
            ctx->pc = 0x1F6A08u;
            goto label_1f6a08;
        }
    }
    ctx->pc = 0x1F69F8u;
    // 0x1f69f8: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x1F69F8u;
    SET_GPR_U32(ctx, 31, 0x1F6A00u);
    ctx->pc = 0x1F69FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F69F8u;
    // 0x1f69fc: 0xb42824  and         $a1, $a1, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x1F69F8u, 0x1F6A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A00u;
label_1f6a00:
    // 0x1f6a00: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1F6A00u;
    {
        const bool branch_taken_0x1f6a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a00) {
            ctx->pc = 0x1F6A40u;
            goto label_1f6a40;
        }
    }
    ctx->pc = 0x1F6A08u;
label_1f6a08:
    // 0x1f6a08: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x1F6A08u;
    SET_GPR_U32(ctx, 31, 0x1F6A10u);
    ctx->pc = 0x1F6A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6A08u;
    // 0x1f6a0c: 0xb42824  and         $a1, $a1, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x1F6A08u, 0x1F6A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A10u;
label_1f6a10:
    // 0x1f6a10: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F6A10u;
    {
        const bool branch_taken_0x1f6a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a10) {
            ctx->pc = 0x1F6A40u;
            goto label_1f6a40;
        }
    }
    ctx->pc = 0x1F6A18u;
label_1f6a18:
    // 0x1f6a18: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1f6a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f6a1c: 0x14550006  bne         $v0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6A1Cu;
    {
        const bool branch_taken_0x1f6a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1f6a1c) {
            ctx->pc = 0x1F6A38u;
            goto label_1f6a38;
        }
    }
    ctx->pc = 0x1F6A24u;
    // 0x1f6a24: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x1F6A24u;
    SET_GPR_U32(ctx, 31, 0x1F6A2Cu);
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x1F6A24u, 0x1F6A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A2Cu;
label_1f6a2c:
    // 0x1f6a2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6A2Cu;
    {
        const bool branch_taken_0x1f6a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6a2c) {
            ctx->pc = 0x1F6A40u;
            goto label_1f6a40;
        }
    }
    ctx->pc = 0x1F6A34u;
    // 0x1f6a34: 0x0  nop
    ctx->pc = 0x1f6a34u;
    // NOP
label_1f6a38:
    // 0x1f6a38: 0xc0972c8  jal         func_25CB20
    ctx->pc = 0x1F6A38u;
    SET_GPR_U32(ctx, 31, 0x1F6A40u);
    ctx->pc = 0x25CB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CB20u, 0x1F6A38u, 0x1F6A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6A40u;
label_1f6a40:
    // 0x1f6a40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f6a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f6a44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f6a44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f6a48: 0x26230008  addiu       $v1, $s1, 0x8
    ctx->pc = 0x1f6a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x1f6a4c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f6a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6a50: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6a50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6a54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F6A54u;
    {
        const bool branch_taken_0x1f6a54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6a54) {
            ctx->pc = 0x1F6A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6A54u;
            // 0x1f6a58: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6A5Cu;
            goto label_1f6a5c;
        }
    }
    ctx->pc = 0x1F6A5Cu;
label_1f6a5c:
    // 0x1f6a5c: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x1f6a5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1f6a60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F6A60u;
    {
        const bool branch_taken_0x1f6a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A60u;
        // 0x1f6a64: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a60) {
            ctx->pc = 0x1F6A74u;
            goto label_1f6a74;
        }
    }
    ctx->pc = 0x1F6A68u;
    // 0x1f6a68: 0x3401ffff  ori         $at, $zero, 0xFFFF
    ctx->pc = 0x1f6a68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1f6a6c: 0x221021  addu        $v0, $at, $v0
    ctx->pc = 0x1f6a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1f6a70: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x1f6a70u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_1f6a74:
    // 0x1f6a74: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1f6a74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f6a78: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x1F6A78u;
    {
        const bool branch_taken_0x1f6a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A78u;
        // 0x1f6a7c: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6a78) {
            ctx->pc = 0x1F69A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f69a8;
        }
    }
    ctx->pc = 0x1F6A80u;
    // 0x1f6a80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6a80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f6a84:
    // 0x1f6a84: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6a84u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6a88: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6a88u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6a8c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f6a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6a90: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6a90u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6a94: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6a94u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6a98: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6A9Cu;
        // 0x1f6aa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6AA4u;
    // 0x1f6aa4: 0x0  nop
    ctx->pc = 0x1f6aa4u;
    // NOP
    ctx->pc = 0x1f6aa8u;
}
