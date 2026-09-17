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

// Function: sub_00363950
// Address: 0x363950 - 0x363a38
void sub_00363950_0x363950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363950_0x363950");
#endif

    switch (ctx->pc) {
        case 0x363984u: goto label_363984;
        case 0x3639ccu: goto label_3639cc;
        case 0x3639f4u: goto label_3639f4;
        default: break;
    }

    ctx->pc = 0x363950u;

    // 0x363950: 0x308500ff  andi        $a1, $a0, 0xFF
    ctx->pc = 0x363950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x363954: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363954u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363958: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x363958u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x36395c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363960: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x363960u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x363964: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x363964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x363968: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x363968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
    // 0x36396c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x36396cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x363970: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x363970u;
    {
        const bool branch_taken_0x363970 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x363974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363970u;
        // 0x363974: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363970) {
            ctx->pc = 0x363990u;
            goto label_363990;
        }
    }
    ctx->pc = 0x363978u;
    // 0x363978: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x363978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x36397c: 0xc0d8b06  jal         func_362C18
    ctx->pc = 0x36397Cu;
    SET_GPR_U32(ctx, 31, 0x363984u);
    ctx->pc = 0x363980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36397Cu;
    // 0x363980: 0x248478f0  addiu       $a0, $a0, 0x78F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x362C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x362C18u, 0x36397Cu, 0x363984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363984u;
label_363984:
    // 0x363984: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x363984u;
    {
        const bool branch_taken_0x363984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363984u;
        // 0x363988: 0x3c028000  lui         $v0, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363984) {
            ctx->pc = 0x363A20u;
            goto label_363a20;
        }
    }
    ctx->pc = 0x36398Cu;
    // 0x36398c: 0x0  nop
    ctx->pc = 0x36398cu;
    // NOP
label_363990:
    // 0x363990: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x363990u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x363994: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x363994u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x363998: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x363998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x36399c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36399cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3639a0: 0x0  nop
    ctx->pc = 0x3639a0u;
    // NOP
    // 0x3639a4: 0x0  nop
    ctx->pc = 0x3639a4u;
    // NOP
    // 0x3639a8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3639a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
    // 0x3639ac: 0x0  nop
    ctx->pc = 0x3639acu;
    // NOP
    // 0x3639b0: 0x0  nop
    ctx->pc = 0x3639b0u;
    // NOP
    // 0x3639b4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x3639b4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3639b8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x3639b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3639bc: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x3639BCu;
    {
        const bool branch_taken_0x3639bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3639bc) {
            ctx->pc = 0x3639C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3639BCu;
            // 0x3639c0: 0x46140042  mul.s       $f1, $f0, $f20 (Delay Slot)
            ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3639D0u;
            goto label_3639d0;
        }
    }
    ctx->pc = 0x3639C4u;
    // 0x3639c4: 0xc04754c  jal         func_11D530
    ctx->pc = 0x3639C4u;
    SET_GPR_U32(ctx, 31, 0x3639CCu);
    ctx->pc = 0x11D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D530u, 0x3639C4u, 0x3639CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3639CCu;
label_3639cc:
    // 0x3639cc: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x3639ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3639d0:
    // 0x3639d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x3639d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x3639d4: 0xc4a0c080  lwc1        $f0, -0x3F80($a1)
    ctx->pc = 0x3639d4u;
    { uint32_t bits = FAST_READ32(0x45C080u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3639d8: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x3639d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x3639dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3639dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3639e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3639E0u;
    {
        const bool branch_taken_0x3639e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3639E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639E0u;
        // 0x3639e4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3639e0) {
            ctx->pc = 0x3639F0u;
            goto label_3639f0;
        }
    }
    ctx->pc = 0x3639E8u;
    // 0x3639e8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3639E8u;
    {
        const bool branch_taken_0x3639e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3639ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639E8u;
        // 0x3639ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3639e8) {
            ctx->pc = 0x363A1Cu;
            goto label_363a1c;
        }
    }
    ctx->pc = 0x3639F0u;
label_3639f0:
    // 0x3639f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3639f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3639f4:
    // 0x3639f4: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x3639f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3639f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3639F8u;
    {
        const bool branch_taken_0x3639f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3639FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3639F8u;
        // 0x3639fc: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3639f8) {
            ctx->pc = 0x363A1Cu;
            goto label_363a1c;
        }
    }
    ctx->pc = 0x363A00u;
    // 0x363a00: 0x24a2c080  addiu       $v0, $a1, -0x3F80
    ctx->pc = 0x363a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951040));
    // 0x363a04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x363a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x363a08: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x363a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363a0c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x363a0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x363a10: 0x4502fff8  bc1fl       . + 4 + (-0x8 << 2)
    ctx->pc = 0x363A10u;
    {
        const bool branch_taken_0x363a10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x363a10) {
            ctx->pc = 0x363A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363A10u;
            // 0x363a14: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3639F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3639f4;
        }
    }
    ctx->pc = 0x363A18u;
    // 0x363a18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363a18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_363a1c:
    // 0x363a1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363a1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363a20:
    // 0x363a20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363a20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363a24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363a28: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x363a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x363a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x363A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363A2Cu;
        // 0x363a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363A34u;
    // 0x363a34: 0x0  nop
    ctx->pc = 0x363a34u;
    // NOP
    ctx->pc = 0x363a38u;
}
