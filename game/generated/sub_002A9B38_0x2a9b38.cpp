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

// Function: sub_002A9B38
// Address: 0x2a9b38 - 0x2a9c48
void sub_002A9B38_0x2a9b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9B38_0x2a9b38");
#endif

    switch (ctx->pc) {
        case 0x2a9b8cu: goto label_2a9b8c;
        case 0x2a9bb8u: goto label_2a9bb8;
        default: break;
    }

    ctx->pc = 0x2a9b38u;

    // 0x2a9b38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a9b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a9b3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a9b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a9b40: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2a9b40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a9b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9b48: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a9b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a9b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a9b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a9b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b54: 0xe7bb0050  swc1        $f27, 0x50($sp)
    ctx->pc = 0x2a9b54u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a9b58: 0x460066c6  mov.s       $f27, $f12
    ctx->pc = 0x2a9b58u;
    ctx->f[27] = FPU_MOV_S(ctx->f[12]);
    // 0x2a9b5c: 0xe7ba0048  swc1        $f26, 0x48($sp)
    ctx->pc = 0x2a9b5cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a9b60: 0x46006e86  mov.s       $f26, $f13
    ctx->pc = 0x2a9b60u;
    ctx->f[26] = FPU_MOV_S(ctx->f[13]);
    // 0x2a9b64: 0xe7b90040  swc1        $f25, 0x40($sp)
    ctx->pc = 0x2a9b64u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a9b68: 0x46007646  mov.s       $f25, $f14
    ctx->pc = 0x2a9b68u;
    ctx->f[25] = FPU_MOV_S(ctx->f[14]);
    // 0x2a9b6c: 0xe7b80038  swc1        $f24, 0x38($sp)
    ctx->pc = 0x2a9b6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a9b70: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x2a9b70u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x2a9b74: 0xe7b70030  swc1        $f23, 0x30($sp)
    ctx->pc = 0x2a9b74u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a9b78: 0x460085c6  mov.s       $f23, $f16
    ctx->pc = 0x2a9b78u;
    ctx->f[23] = FPU_MOV_S(ctx->f[16]);
    // 0x2a9b7c: 0xe7b60028  swc1        $f22, 0x28($sp)
    ctx->pc = 0x2a9b7cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a9b80: 0x46008d86  mov.s       $f22, $f17
    ctx->pc = 0x2a9b80u;
    ctx->f[22] = FPU_MOV_S(ctx->f[17]);
    // 0x2a9b84: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x2a9b84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a9b88: 0x46009546  mov.s       $f21, $f18
    ctx->pc = 0x2a9b88u;
    ctx->f[21] = FPU_MOV_S(ctx->f[18]);
label_2a9b8c:
    // 0x2a9b8c: 0x4615b040  add.s       $f1, $f22, $f21
    ctx->pc = 0x2a9b8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
    // 0x2a9b90: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a9b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a9b94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a9b94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a9b98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b9c: 0x4600d346  mov.s       $f13, $f26
    ctx->pc = 0x2a9b9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[26]);
    // 0x2a9ba0: 0x4600cb86  mov.s       $f14, $f25
    ctx->pc = 0x2a9ba0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[25]);
    // 0x2a9ba4: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2a9ba4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x2a9ba8: 0x4600bc06  mov.s       $f16, $f23
    ctx->pc = 0x2a9ba8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[23]);
    // 0x2a9bac: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x2a9bacu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2a9bb0: 0xc0aa67e  jal         func_2A99F8
    ctx->pc = 0x2A9BB0u;
    SET_GPR_U32(ctx, 31, 0x2A9BB8u);
    ctx->pc = 0x2A9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9BB0u;
    // 0x2a9bb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A99F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A99F8u, 0x2A9BB0u, 0x2A9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9BB8u;
label_2a9bb8:
    // 0x2a9bb8: 0xc7849084  lwc1        $f4, -0x6F7C($gp)
    ctx->pc = 0x2a9bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2a9bbc: 0x2a02000b  slti        $v0, $s0, 0xB
    ctx->pc = 0x2a9bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2a9bc0: 0x4600d841  sub.s       $f1, $f27, $f0
    ctx->pc = 0x2a9bc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[27], ctx->f[0]);
    // 0x2a9bc4: 0xc7839088  lwc1        $f3, -0x6F78($gp)
    ctx->pc = 0x2a9bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a9bc8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2a9bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a9bcc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A9BCCu;
    {
        const bool branch_taken_0x2a9bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BCCu;
        // 0x2a9bd0: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bcc) {
            ctx->pc = 0x2A9C10u;
            goto label_2a9c10;
        }
    }
    ctx->pc = 0x2A9BD4u;
    // 0x2a9bd4: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2a9bd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9bd8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A9BD8u;
    {
        const bool branch_taken_0x2a9bd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2a9bd8) {
            ctx->pc = 0x2A9BF8u;
            goto label_2a9bf8;
        }
    }
    ctx->pc = 0x2A9BE0u;
    // 0x2a9be0: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x2a9be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9be4: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2A9BE4u;
    {
        const bool branch_taken_0x2a9be4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BE4u;
        // 0x2a9be8: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9be4) {
            ctx->pc = 0x2A9C10u;
            goto label_2a9c10;
        }
    }
    ctx->pc = 0x2A9BECu;
    // 0x2a9bec: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x2A9BECu;
    {
        const bool branch_taken_0x2a9bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BECu;
        // 0x2a9bf0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bec) {
            ctx->pc = 0x2A9B8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9b8c;
        }
    }
    ctx->pc = 0x2A9BF4u;
    // 0x2a9bf4: 0x0  nop
    ctx->pc = 0x2a9bf4u;
    // NOP
label_2a9bf8:
    // 0x2a9bf8: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x2a9bf8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a9bfc: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9BFCu;
    {
        const bool branch_taken_0x2a9bfc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A9C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9BFCu;
        // 0x2a9c00: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bfc) {
            ctx->pc = 0x2A9C10u;
            goto label_2a9c10;
        }
    }
    ctx->pc = 0x2A9C04u;
    // 0x2a9c04: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2a9c04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9c08: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x2A9C08u;
    {
        const bool branch_taken_0x2a9c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C08u;
        // 0x2a9c0c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9c08) {
            ctx->pc = 0x2A9B8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a9b8c;
        }
    }
    ctx->pc = 0x2A9C10u;
label_2a9c10:
    // 0x2a9c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9c14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a9c14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9c18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a9c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9c1c: 0xc7bb0050  lwc1        $f27, 0x50($sp)
    ctx->pc = 0x2a9c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2a9c20: 0xc7ba0048  lwc1        $f26, 0x48($sp)
    ctx->pc = 0x2a9c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a9c24: 0xc7b90040  lwc1        $f25, 0x40($sp)
    ctx->pc = 0x2a9c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a9c28: 0xc7b80038  lwc1        $f24, 0x38($sp)
    ctx->pc = 0x2a9c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a9c2c: 0xc7b70030  lwc1        $f23, 0x30($sp)
    ctx->pc = 0x2a9c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a9c30: 0xc7b60028  lwc1        $f22, 0x28($sp)
    ctx->pc = 0x2a9c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a9c34: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x2a9c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a9c38: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2a9c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C3Cu;
        // 0x2a9c40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9C3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9C44u;
    // 0x2a9c44: 0x0  nop
    ctx->pc = 0x2a9c44u;
    // NOP
    ctx->pc = 0x2a9c48u;
}
