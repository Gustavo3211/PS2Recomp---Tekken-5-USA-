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

// Function: sub_00363A38
// Address: 0x363a38 - 0x363b08
void sub_00363A38_0x363a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363A38_0x363a38");
#endif

    switch (ctx->pc) {
        case 0x363a5cu: goto label_363a5c;
        case 0x363abcu: goto label_363abc;
        default: break;
    }

    ctx->pc = 0x363a38u;

    // 0x363a38: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x363a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x363a3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x363a3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x363a40: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x363a40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x363a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x363a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x363a48: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363A48u;
    {
        const bool branch_taken_0x363a48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x363A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A48u;
        // 0x363a4c: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363a48) {
            ctx->pc = 0x363A68u;
            goto label_363a68;
        }
    }
    ctx->pc = 0x363A50u;
    // 0x363a50: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363a50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x363a54: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x363A54u;
    SET_GPR_U32(ctx, 31, 0x363A5Cu);
    ctx->pc = 0x363A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363A54u;
    // 0x363a58: 0x24847918  addiu       $a0, $a0, 0x7918 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x363A54u, 0x363A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363A5Cu;
label_363a5c:
    // 0x363a5c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x363A5Cu;
    {
        const bool branch_taken_0x363a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A5Cu;
        // 0x363a60: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363a5c) {
            ctx->pc = 0x363AFCu;
            goto label_363afc;
        }
    }
    ctx->pc = 0x363A64u;
    // 0x363a64: 0x0  nop
    ctx->pc = 0x363a64u;
    // NOP
label_363a68:
    // 0x363a68: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x363a68u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x363a6c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x363a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x363a70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x363a70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x363a74: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x363a74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x363a78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x363a78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x363a7c: 0x84a2c0c0  lh          $v0, -0x3F40($a1)
    ctx->pc = 0x363a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)FAST_READ16(0x45C0C0u));
    // 0x363a80: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x363a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x363a84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x363a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363a88: 0x0  nop
    ctx->pc = 0x363a88u;
    // NOP
    // 0x363a8c: 0x0  nop
    ctx->pc = 0x363a8cu;
    // NOP
    // 0x363a90: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x363a90u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[3] = ctx->f[3] / ctx->f[2];
    // 0x363a94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x363a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363a98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x363a98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x363a9c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x363a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x363aa0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x363aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363aa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x363AA4u;
    {
        const bool branch_taken_0x363aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x363AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363AA4u;
        // 0x363aa8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363aa4) {
            ctx->pc = 0x363AB8u;
            goto label_363ab8;
        }
    }
    ctx->pc = 0x363AACu;
    // 0x363aac: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x363AACu;
    {
        const bool branch_taken_0x363aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363AACu;
        // 0x363ab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363aac) {
            ctx->pc = 0x363AF8u;
            goto label_363af8;
        }
    }
    ctx->pc = 0x363AB4u;
    // 0x363ab4: 0x0  nop
    ctx->pc = 0x363ab4u;
    // NOP
label_363ab8:
    // 0x363ab8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_363abc:
    // 0x363abc: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x363abcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x363ac0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x363AC0u;
    {
        const bool branch_taken_0x363ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363AC0u;
        // 0x363ac4: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ac0) {
            ctx->pc = 0x363AF8u;
            goto label_363af8;
        }
    }
    ctx->pc = 0x363AC8u;
    // 0x363ac8: 0x24a2c0c0  addiu       $v0, $a1, -0x3F40
    ctx->pc = 0x363ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951104));
    // 0x363acc: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x363accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x363ad0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x363ad0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363ad4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x363ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x363ad8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x363ad8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363adc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x363adcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363ae0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x363ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x363ae4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x363ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x363ae8: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x363ae8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363aec: 0x4502fff3  bc1fl       . + 4 + (-0xD << 2)
    ctx->pc = 0x363AECu;
    {
        const bool branch_taken_0x363aec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363aec) {
            ctx->pc = 0x363AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363AECu;
            // 0x363af0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363ABCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_363abc;
        }
    }
    ctx->pc = 0x363AF4u;
    // 0x363af4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x363af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363af8:
    // 0x363af8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x363af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_363afc:
    // 0x363afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x363afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363b00: 0x3e00008  jr          $ra
    ctx->pc = 0x363B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B00u;
        // 0x363b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363B08u;
}
