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

// Function: sub_001F7AB0
// Address: 0x1f7ab0 - 0x1f7c58
void sub_001F7AB0_0x1f7ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7AB0_0x1f7ab0");
#endif

    switch (ctx->pc) {
        case 0x1f7b5cu: goto label_1f7b5c;
        case 0x1f7b80u: goto label_1f7b80;
        case 0x1f7b94u: goto label_1f7b94;
        case 0x1f7ba8u: goto label_1f7ba8;
        case 0x1f7bb8u: goto label_1f7bb8;
        default: break;
    }

    ctx->pc = 0x1f7ab0u;

    // 0x1f7ab0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1f7ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1f7ab4: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x1f7ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x1f7ab8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f7ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7abc: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1f7abcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f7ac0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1f7ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x1f7ac4: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1f7ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x1f7ac8: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x1f7ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x1f7acc: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x1f7accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x1f7ad0: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1f7ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x1f7ad4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1f7ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f7ad8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f7ad8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f7adc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f7adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f7ae0: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x1f7ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7ae4: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1f7ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7ae8: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x1f7ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7aec: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x1f7aecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f7af0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f7af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1f7af4: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1f7af4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1f7af8: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x1f7af8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1f7afc: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1f7afcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7b00: 0x8e900310  lw          $s0, 0x310($s4)
    ctx->pc = 0x1f7b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 784)));
    // 0x1f7b04: 0xdfa30018  ld          $v1, 0x18($sp)
    ctx->pc = 0x1f7b04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7b08: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1f7b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1f7b0c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7B0Cu;
    {
        const bool branch_taken_0x1f7b0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B0Cu;
        // 0x1f7b10: 0xffa30008  sd          $v1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b0c) {
            ctx->pc = 0x1F7B20u;
            goto label_1f7b20;
        }
    }
    ctx->pc = 0x1F7B14u;
    // 0x1f7b14: 0x8e9000c4  lw          $s0, 0xC4($s4)
    ctx->pc = 0x1f7b14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x1f7b18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F7B18u;
    {
        const bool branch_taken_0x1f7b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7B18u;
        // 0x1f7b1c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7b18) {
            ctx->pc = 0x1F7B24u;
            goto label_1f7b24;
        }
    }
    ctx->pc = 0x1F7B20u;
label_1f7b20:
    // 0x1f7b20: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x1f7b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
label_1f7b24:
    // 0x1f7b24: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1f7b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1f7b28: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1f7b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1f7b2c: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x1F7B2Cu;
    {
        const bool branch_taken_0x1f7b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b2c) {
            ctx->pc = 0x1F7B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B2Cu;
            // 0x1f7b30: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7C30u;
            goto label_1f7c30;
        }
    }
    ctx->pc = 0x1F7B34u;
    // 0x1f7b34: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1f7b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1f7b38: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1f7b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1f7b3c: 0x5440003c  bnel        $v0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x1F7B3Cu;
    {
        const bool branch_taken_0x1f7b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7b3c) {
            ctx->pc = 0x1F7B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7B3Cu;
            // 0x1f7b40: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7C30u;
            goto label_1f7c30;
        }
    }
    ctx->pc = 0x1F7B44u;
    // 0x1f7b44: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1f7b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f7b48: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1f7b48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f7b4c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1f7b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f7b50: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b54: 0xc09ec82  jal         func_27B208
    ctx->pc = 0x1F7B54u;
    SET_GPR_U32(ctx, 31, 0x1F7B5Cu);
    ctx->pc = 0x1F7B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B54u;
    // 0x1f7b58: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B208u, 0x1F7B54u, 0x1F7B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B5Cu;
label_1f7b5c:
    // 0x1f7b5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f7b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b60: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x1f7b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f7b64: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x1f7b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f7b68: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1f7b68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f7b6c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f7b6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f7b70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f7b74: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f7b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1f7b78: 0xc09ec82  jal         func_27B208
    ctx->pc = 0x1F7B78u;
    SET_GPR_U32(ctx, 31, 0x1F7B80u);
    ctx->pc = 0x1F7B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B78u;
    // 0x1f7b7c: 0x46156301  sub.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B208u, 0x1F7B78u, 0x1F7B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B80u;
label_1f7b80:
    // 0x1f7b80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f7b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b84: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x1f7b84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f7b88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f7b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b8c: 0xc084784  jal         func_211E10
    ctx->pc = 0x1F7B8Cu;
    SET_GPR_U32(ctx, 31, 0x1F7B94u);
    ctx->pc = 0x1F7B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7B8Cu;
    // 0x1f7b90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1F7B8Cu, 0x1F7B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7B94u;
label_1f7b94:
    // 0x1f7b94: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f7b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7b98: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1f7b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1f7b9c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1f7b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ba0: 0xc084784  jal         func_211E10
    ctx->pc = 0x1F7BA0u;
    SET_GPR_U32(ctx, 31, 0x1F7BA8u);
    ctx->pc = 0x1F7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BA0u;
    // 0x1f7ba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211E10u, 0x1F7BA0u, 0x1F7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BA8u;
label_1f7ba8:
    // 0x1f7ba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f7ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f7bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7bb0: 0xc084774  jal         func_211DD0
    ctx->pc = 0x1F7BB0u;
    SET_GPR_U32(ctx, 31, 0x1F7BB8u);
    ctx->pc = 0x1F7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7BB0u;
    // 0x1f7bb4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211DD0u, 0x1F7BB0u, 0x1F7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7BB8u;
label_1f7bb8:
    // 0x1f7bb8: 0xc6860000  lwc1        $f6, 0x0($s4)
    ctx->pc = 0x1f7bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1f7bbc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1f7bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7bc0: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1f7bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f7bc4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f7bc4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f7bc8: 0xc6870008  lwc1        $f7, 0x8($s4)
    ctx->pc = 0x1f7bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1f7bcc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1f7bccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1f7bd0: 0xc6840750  lwc1        $f4, 0x750($s4)
    ctx->pc = 0x1f7bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f7bd4: 0xc6850758  lwc1        $f5, 0x758($s4)
    ctx->pc = 0x1f7bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1f7bd8: 0xc6820014  lwc1        $f2, 0x14($s4)
    ctx->pc = 0x1f7bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7bdc: 0xc683001c  lwc1        $f3, 0x1C($s4)
    ctx->pc = 0x1f7bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7be0: 0x46003180  add.s       $f6, $f6, $f0
    ctx->pc = 0x1f7be0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x1f7be4: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f7be4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f7be8: 0x8e820048  lw          $v0, 0x48($s4)
    ctx->pc = 0x1f7be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x1f7bec: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x1f7becu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x1f7bf0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1f7bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f7bf4: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x1f7bf4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x1f7bf8: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x1f7bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f7bfc: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1f7bfcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1f7c00: 0xe6860000  swc1        $f6, 0x0($s4)
    ctx->pc = 0x1f7c00u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1f7c04: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x1f7c04u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1f7c08: 0xe6820014  swc1        $f2, 0x14($s4)
    ctx->pc = 0x1f7c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
    // 0x1f7c0c: 0xe683001c  swc1        $f3, 0x1C($s4)
    ctx->pc = 0x1f7c0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
    // 0x1f7c10: 0xe6870008  swc1        $f7, 0x8($s4)
    ctx->pc = 0x1f7c10u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
    // 0x1f7c14: 0xe6840750  swc1        $f4, 0x750($s4)
    ctx->pc = 0x1f7c14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1872), bits); }
    // 0x1f7c18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F7C18u;
    {
        const bool branch_taken_0x1f7c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C18u;
        // 0x1f7c1c: 0xe6850758  swc1        $f5, 0x758($s4) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1880), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7c18) {
            ctx->pc = 0x1F7C2Cu;
            goto label_1f7c2c;
        }
    }
    ctx->pc = 0x1F7C20u;
    // 0x1f7c20: 0xe6940004  swc1        $f20, 0x4($s4)
    ctx->pc = 0x1f7c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x1f7c24: 0xe6940018  swc1        $f20, 0x18($s4)
    ctx->pc = 0x1f7c24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
    // 0x1f7c28: 0xe6940754  swc1        $f20, 0x754($s4)
    ctx->pc = 0x1f7c28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1876), bits); }
label_1f7c2c:
    // 0x1f7c2c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1f7c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1f7c30:
    // 0x1f7c30: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1f7c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f7c34: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1f7c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f7c38: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1f7c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1f7c3c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1f7c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f7c40: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1f7c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1f7c44: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1f7c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f7c48: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1f7c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f7c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7C4Cu;
        // 0x1f7c50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7C54u;
    // 0x1f7c54: 0x0  nop
    ctx->pc = 0x1f7c54u;
    // NOP
    ctx->pc = 0x1f7c58u;
}
