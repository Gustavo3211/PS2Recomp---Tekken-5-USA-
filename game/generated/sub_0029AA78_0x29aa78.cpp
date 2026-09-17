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

// Function: sub_0029AA78
// Address: 0x29aa78 - 0x29ab40
void sub_0029AA78_0x29aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029AA78_0x29aa78");
#endif

    switch (ctx->pc) {
        case 0x29aac8u: goto label_29aac8;
        case 0x29aae0u: goto label_29aae0;
        case 0x29ab04u: goto label_29ab04;
        case 0x29ab28u: goto label_29ab28;
        default: break;
    }

    ctx->pc = 0x29aa78u;

    // 0x29aa78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29aa7c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x29aa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x29aa80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x29aa80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x29aa84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29aa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa88: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x29aa88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x29aa8c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29aa90: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x29aa90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29aa94: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x29aa94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29aa98: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x29aa98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29aa9c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x29aaa0: 0x3c01003c  lui         $at, 0x3C
    ctx->pc = 0x29aaa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)60 << 16));
    // 0x29aaa4: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x29aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x29aaa8: 0xc434c648  lwc1        $f20, -0x39B8($at)
    ctx->pc = 0x29aaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294952520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29aaac: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x29aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x29aab0: 0xc7959044  lwc1        $f21, -0x6FBC($gp)
    ctx->pc = 0x29aab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29aab4: 0xc4600104  lwc1        $f0, 0x104($v1)
    ctx->pc = 0x29aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29aab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29aabc: 0x8c44ffe8  lw          $a0, -0x18($v0)
    ctx->pc = 0x29aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967272)));
    // 0x29aac0: 0xc08636a  jal         func_218DA8
    ctx->pc = 0x29AAC0u;
    SET_GPR_U32(ctx, 31, 0x29AAC8u);
    ctx->pc = 0x29AAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AAC0u;
    // 0x29aac4: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x218DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218DA8u, 0x29AAC0u, 0x29AAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AAC8u;
label_29aac8:
    // 0x29aac8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29aac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29aacc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aad0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29aad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aad4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x29aad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29aad8: 0xc0cc3c8  jal         func_330F20
    ctx->pc = 0x29AAD8u;
    SET_GPR_U32(ctx, 31, 0x29AAE0u);
    ctx->pc = 0x29AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AAD8u;
    // 0x29aadc: 0x4615a500  add.s       $f20, $f20, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F20u, 0x29AAD8u, 0x29AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AAE0u;
label_29aae0:
    // 0x29aae0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x29aae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x29aae4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29aae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aae8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x29aae8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29aaec: 0x2409006e  addiu       $t1, $zero, 0x6E
    ctx->pc = 0x29aaecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x29aaf0: 0x2484c118  addiu       $a0, $a0, -0x3EE8
    ctx->pc = 0x29aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951192));
    // 0x29aaf4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29aaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29aaf8: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x29aaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x29aafc: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29AAFCu;
    SET_GPR_U32(ctx, 31, 0x29AB04u);
    ctx->pc = 0x29AB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AAFCu;
    // 0x29ab00: 0xa7a00006  sh          $zero, 0x6($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29AAFCu, 0x29AB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB04u;
label_29ab04:
    // 0x29ab04: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x29ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x29ab08: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x29ab08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x29ab0c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x29ab0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x29ab10: 0x24843f08  addiu       $a0, $a0, 0x3F08
    ctx->pc = 0x29ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16136));
    // 0x29ab14: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x29ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x29ab18: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x29ab18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab1c: 0x63023  negu        $a2, $a2
    ctx->pc = 0x29ab1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x29ab20: 0xc0b640e  jal         func_2D9038
    ctx->pc = 0x29AB20u;
    SET_GPR_U32(ctx, 31, 0x29AB28u);
    ctx->pc = 0x29AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB20u;
    // 0x29ab24: 0x24c600f7  addiu       $a2, $a2, 0xF7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 247));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9038u, 0x29AB20u, 0x29AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB28u;
label_29ab28:
    // 0x29ab28: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29ab28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ab2c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x29ab2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x29ab30: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x29ab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29ab34: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x29ab34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29ab38: 0x3e00008  jr          $ra
    ctx->pc = 0x29AB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB38u;
        // 0x29ab3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AB40u;
}
