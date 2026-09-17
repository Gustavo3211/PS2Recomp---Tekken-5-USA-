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

// Function: sub_00368D28
// Address: 0x368d28 - 0x368db8
void sub_00368D28_0x368d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368D28_0x368d28");
#endif

    switch (ctx->pc) {
        case 0x368d4cu: goto label_368d4c;
        case 0x368d58u: goto label_368d58;
        case 0x368d8cu: goto label_368d8c;
        default: break;
    }

    ctx->pc = 0x368d28u;

    // 0x368d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x368d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x368d2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x368d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x368d30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x368d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x368d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x368d38: 0xe7b50020  swc1        $f21, 0x20($sp)
    ctx->pc = 0x368d38u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x368d3c: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x368d3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x368d40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x368d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x368d44: 0xc0da49a  jal         func_369268
    ctx->pc = 0x368D44u;
    SET_GPR_U32(ctx, 31, 0x368D4Cu);
    ctx->pc = 0x368D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D44u;
    // 0x368d48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369268u, 0x368D44u, 0x368D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D4Cu;
label_368d4c:
    // 0x368d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x368d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d50: 0xc0da49a  jal         func_369268
    ctx->pc = 0x368D50u;
    SET_GPR_U32(ctx, 31, 0x368D58u);
    ctx->pc = 0x368D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D50u;
    // 0x368d54: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369268u, 0x368D50u, 0x368D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D58u;
label_368d58:
    // 0x368d58: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x368d58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x368d5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x368d5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x368d60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x368d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x368d64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x368d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368d68: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x368d68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368d6c: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x368D6Cu;
    {
        const bool branch_taken_0x368d6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x368d6c) {
            ctx->pc = 0x368D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368D6Cu;
            // 0x368d70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368DA0u;
            goto label_368da0;
        }
    }
    ctx->pc = 0x368D74u;
    // 0x368d74: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x368d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x368d78: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x368D78u;
    {
        const bool branch_taken_0x368d78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x368d78) {
            ctx->pc = 0x368D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x368D78u;
            // 0x368d7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368DA0u;
            goto label_368da0;
        }
    }
    ctx->pc = 0x368D80u;
    // 0x368d80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x368d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368d84: 0xc0da4a6  jal         func_369298
    ctx->pc = 0x368D84u;
    SET_GPR_U32(ctx, 31, 0x368D8Cu);
    ctx->pc = 0x368D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368D84u;
    // 0x368d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369298u, 0x368D84u, 0x368D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368D8Cu;
label_368d8c:
    // 0x368d8c: 0x4614a842  mul.s       $f1, $f21, $f20
    ctx->pc = 0x368d8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x368d90: 0x0  nop
    ctx->pc = 0x368d90u;
    // NOP
    // 0x368d94: 0x0  nop
    ctx->pc = 0x368d94u;
    // NOP
    // 0x368d98: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x368d98u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x368d9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x368d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_368da0:
    // 0x368da0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x368da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x368da4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x368da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x368da8: 0xc7b50020  lwc1        $f21, 0x20($sp)
    ctx->pc = 0x368da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x368dac: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x368dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368db0: 0x3e00008  jr          $ra
    ctx->pc = 0x368DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x368DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368DB0u;
        // 0x368db4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368DB8u;
}
