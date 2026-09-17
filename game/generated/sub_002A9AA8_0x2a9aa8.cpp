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

// Function: sub_002A9AA8
// Address: 0x2a9aa8 - 0x2a9b38
void sub_002A9AA8_0x2a9aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9AA8_0x2a9aa8");
#endif

    switch (ctx->pc) {
        case 0x2a9afcu: goto label_2a9afc;
        default: break;
    }

    ctx->pc = 0x2a9aa8u;

    // 0x2a9aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a9aac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a9aacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9ab0: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x2a9ab0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a9ab4: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x2a9ab4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
    // 0x2a9ab8: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x2a9ab8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a9abc: 0x46008586  mov.s       $f22, $f16
    ctx->pc = 0x2a9abcu;
    ctx->f[22] = FPU_MOV_S(ctx->f[16]);
    // 0x2a9ac0: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2a9ac0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a9ac4: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2a9ac4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2a9ac8: 0x46008b46  mov.s       $f13, $f17
    ctx->pc = 0x2a9ac8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[17]);
    // 0x2a9acc: 0x44808800  mtc1        $zero, $f17
    ctx->pc = 0x2a9accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2a9ad0: 0x46009386  mov.s       $f14, $f18
    ctx->pc = 0x2a9ad0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[18]);
    // 0x2a9ad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a9ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a9ad8: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2a9ad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2a9adc: 0xc7b00030  lwc1        $f16, 0x30($sp)
    ctx->pc = 0x2a9adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a9ae0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2a9ae0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a9ae4: 0x46007d06  mov.s       $f20, $f15
    ctx->pc = 0x2a9ae4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[15]);
    // 0x2a9ae8: 0x46009bc6  mov.s       $f15, $f19
    ctx->pc = 0x2a9ae8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[19]);
    // 0x2a9aec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a9aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a9af0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a9af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a9af4: 0xc0aa6ce  jal         func_2A9B38
    ctx->pc = 0x2A9AF4u;
    SET_GPR_U32(ctx, 31, 0x2A9AFCu);
    ctx->pc = 0x2A9AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9AF4u;
    // 0x2a9af8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9B38u, 0x2A9AF4u, 0x2A9AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9AFCu;
label_2a9afc:
    // 0x2a9afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9b00: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x2a9b00u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x2a9b04: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x2a9b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a9b08: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2a9b08u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2a9b0c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2a9b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a9b10: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x2a9b10u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x2a9b14: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2a9b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a9b18: 0x4600b406  mov.s       $f16, $f22
    ctx->pc = 0x2a9b18u;
    ctx->f[16] = FPU_MOV_S(ctx->f[22]);
    // 0x2a9b1c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x2a9b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a9b20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9b20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a9b24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2a9b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2a9b28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a9b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a9b2c: 0x80aa67e  j           func_2A99F8
    ctx->pc = 0x2A9B2Cu;
    ctx->pc = 0x2A9B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9B2Cu;
    // 0x2a9b30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A99F8u;
    sub_002A99F8_0x2a99f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2A9B34u;
    // 0x2a9b34: 0x0  nop
    ctx->pc = 0x2a9b34u;
    // NOP
    ctx->pc = 0x2a9b38u;
}
