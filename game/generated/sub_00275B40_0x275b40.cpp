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

// Function: sub_00275B40
// Address: 0x275b40 - 0x275c98
void sub_00275B40_0x275b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275B40_0x275b40");
#endif

    switch (ctx->pc) {
        case 0x275b6cu: goto label_275b6c;
        case 0x275b78u: goto label_275b78;
        case 0x275b88u: goto label_275b88;
        case 0x275b9cu: goto label_275b9c;
        case 0x275ba4u: goto label_275ba4;
        case 0x275bc8u: goto label_275bc8;
        case 0x275c28u: goto label_275c28;
        case 0x275c3cu: goto label_275c3c;
        default: break;
    }

    ctx->pc = 0x275b40u;

    // 0x275b40: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x275b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x275b44: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x275b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x275b48: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x275b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x275b4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x275b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b50: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x275b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x275b54: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x275b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x275b58: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x275b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x275b5c: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x275b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x275b60: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x275b60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x275b64: 0xc08c31a  jal         func_230C68
    ctx->pc = 0x275B64u;
    SET_GPR_U32(ctx, 31, 0x275B6Cu);
    ctx->pc = 0x275B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B64u;
    // 0x275b68: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x230C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230C68u, 0x275B64u, 0x275B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B6Cu;
label_275b6c:
    // 0x275b6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x275b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b70: 0xc08c1b0  jal         func_2306C0
    ctx->pc = 0x275B70u;
    SET_GPR_U32(ctx, 31, 0x275B78u);
    ctx->pc = 0x275B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B70u;
    // 0x275b74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2306C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2306C0u, 0x275B70u, 0x275B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B78u;
label_275b78:
    // 0x275b78: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x275b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b80: 0xc0849ae  jal         func_2126B8
    ctx->pc = 0x275B80u;
    SET_GPR_U32(ctx, 31, 0x275B88u);
    ctx->pc = 0x275B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B80u;
    // 0x275b84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2126B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2126B8u, 0x275B80u, 0x275B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B88u;
label_275b88:
    // 0x275b88: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b8c: 0x27b40060  addiu       $s4, $sp, 0x60
    ctx->pc = 0x275b8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x275b90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x275b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275b94: 0xc08493a  jal         func_2124E8
    ctx->pc = 0x275B94u;
    SET_GPR_U32(ctx, 31, 0x275B9Cu);
    ctx->pc = 0x275B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B94u;
    // 0x275b98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2124E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124E8u, 0x275B94u, 0x275B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275B9Cu;
label_275b9c:
    // 0x275b9c: 0xc09d480  jal         func_275200
    ctx->pc = 0x275B9Cu;
    SET_GPR_U32(ctx, 31, 0x275BA4u);
    ctx->pc = 0x275BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275B9Cu;
    // 0x275ba0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275200u, 0x275B9Cu, 0x275BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275BA4u;
label_275ba4:
    // 0x275ba4: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275ba8: 0x18800031  blez        $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x275BA8u;
    {
        const bool branch_taken_0x275ba8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x275BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BA8u;
        // 0x275bac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275ba8) {
            ctx->pc = 0x275C70u;
            goto label_275c70;
        }
    }
    ctx->pc = 0x275BB0u;
    // 0x275bb0: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x275bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x275bb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x275bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x275bb8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x275bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x275bbc: 0xc4543718  lwc1        $f20, 0x3718($v0)
    ctx->pc = 0x275bbcu;
    { uint32_t bits = FAST_READ32(0x153718u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275bc0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x275bc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275bc4: 0x0  nop
    ctx->pc = 0x275bc4u;
    // NOP
label_275bc8:
    // 0x275bc8: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x275bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x275bcc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x275bccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x275bd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275BD0u;
    {
        const bool branch_taken_0x275bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BD0u;
        // 0x275bd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bd0) {
            ctx->pc = 0x275BE4u;
            goto label_275be4;
        }
    }
    ctx->pc = 0x275BD8u;
    // 0x275bd8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x275BD8u;
    {
        const bool branch_taken_0x275bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275BD8u;
        // 0x275bdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275bd8) {
            ctx->pc = 0x275BE4u;
            goto label_275be4;
        }
    }
    ctx->pc = 0x275BE0u;
    // 0x275be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x275be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_275be4:
    // 0x275be4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x275BE4u;
    {
        const bool branch_taken_0x275be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275be4) {
            ctx->pc = 0x275BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275BE4u;
            // 0x275be8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C64u;
            goto label_275c64;
        }
    }
    ctx->pc = 0x275BECu;
    // 0x275bec: 0xc780ca38  lwc1        $f0, -0x35C8($gp)
    ctx->pc = 0x275becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275bf0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x275bf0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275bf4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x275BF4u;
    {
        const bool branch_taken_0x275bf4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x275bf4) {
            ctx->pc = 0x275BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x275BF4u;
            // 0x275bf8: 0x7a020750  lq          $v0, 0x750($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 1872)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x275C08u;
            goto label_275c08;
        }
    }
    ctx->pc = 0x275BFCu;
    // 0x275bfc: 0x8e020898  lw          $v0, 0x898($s0)
    ctx->pc = 0x275bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
    // 0x275c00: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x275C00u;
    {
        const bool branch_taken_0x275c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C00u;
        // 0x275c04: 0xac510084  sw          $s1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c00) {
            ctx->pc = 0x275C5Cu;
            goto label_275c5c;
        }
    }
    ctx->pc = 0x275C08u;
label_275c08:
    // 0x275c08: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x275c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x275c0c: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x275c0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x275c10: 0x8e0208a0  lw          $v0, 0x8A0($s0)
    ctx->pc = 0x275c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2208)));
    // 0x275c14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275C14u;
    {
        const bool branch_taken_0x275c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C14u;
        // 0x275c18: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c14) {
            ctx->pc = 0x275C30u;
            goto label_275c30;
        }
    }
    ctx->pc = 0x275C1Cu;
    // 0x275c1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x275c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c20: 0xc08491e  jal         func_212478
    ctx->pc = 0x275C20u;
    SET_GPR_U32(ctx, 31, 0x275C28u);
    ctx->pc = 0x275C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C20u;
    // 0x275c24: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x275C20u, 0x275C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C28u;
label_275c28:
    // 0x275c28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275C28u;
    {
        const bool branch_taken_0x275c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C28u;
        // 0x275c2c: 0xc7a1001c  lwc1        $f1, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c28) {
            ctx->pc = 0x275C40u;
            goto label_275c40;
        }
    }
    ctx->pc = 0x275C30u;
label_275c30:
    // 0x275c30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x275c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275c34: 0xc08491e  jal         func_212478
    ctx->pc = 0x275C34u;
    SET_GPR_U32(ctx, 31, 0x275C3Cu);
    ctx->pc = 0x275C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275C34u;
    // 0x275c38: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212478u, 0x275C34u, 0x275C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C3Cu;
label_275c3c:
    // 0x275c3c: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x275c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_275c40:
    // 0x275c40: 0xc780ca38  lwc1        $f0, -0x35C8($gp)
    ctx->pc = 0x275c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294953528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x275c44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x275c44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x275c48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x275C48u;
    {
        const bool branch_taken_0x275c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x275C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C48u;
        // 0x275c4c: 0x8e020898  lw          $v0, 0x898($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c48) {
            ctx->pc = 0x275C58u;
            goto label_275c58;
        }
    }
    ctx->pc = 0x275C50u;
    // 0x275c50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x275C50u;
    {
        const bool branch_taken_0x275c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C50u;
        // 0x275c54: 0xac510084  sw          $s1, 0x84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c50) {
            ctx->pc = 0x275C5Cu;
            goto label_275c5c;
        }
    }
    ctx->pc = 0x275C58u;
label_275c58:
    // 0x275c58: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x275c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_275c5c:
    // 0x275c5c: 0x8f84ae90  lw          $a0, -0x5170($gp)
    ctx->pc = 0x275c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946448)));
    // 0x275c60: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x275c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_275c64:
    // 0x275c64: 0x244102a  slt         $v0, $s2, $a0
    ctx->pc = 0x275c64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x275c68: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x275C68u;
    {
        const bool branch_taken_0x275c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C68u;
        // 0x275c6c: 0x261008d0  addiu       $s0, $s0, 0x8D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275c68) {
            ctx->pc = 0x275BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_275bc8;
        }
    }
    ctx->pc = 0x275C70u;
label_275c70:
    // 0x275c70: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x275c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275c74: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x275c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x275c78: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x275c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x275c7c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x275c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x275c80: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x275c80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x275c84: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x275c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x275c88: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x275c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x275c8c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x275c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275c90: 0x3e00008  jr          $ra
    ctx->pc = 0x275C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275C90u;
        // 0x275c94: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275C98u;
}
