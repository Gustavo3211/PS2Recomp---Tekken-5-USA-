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

// Function: sub_00233138
// Address: 0x233138 - 0x233228
void sub_00233138_0x233138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00233138_0x233138");
#endif

    switch (ctx->pc) {
        case 0x233190u: goto label_233190;
        case 0x2331a0u: goto label_2331a0;
        case 0x2331a8u: goto label_2331a8;
        case 0x2331d8u: goto label_2331d8;
        case 0x2331f8u: goto label_2331f8;
        default: break;
    }

    ctx->pc = 0x233138u;

    // 0x233138: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x233138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x23313c: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x23313cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x233140: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x233140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x233144: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x233144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x233148: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x233148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23314c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x23314cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x233150: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x233150u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x233154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23315c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x23315cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x233160: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x233160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x233164: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x233164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x233168: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x233168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x23316c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x23316cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233170: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x233170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x233174: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x233174u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233178: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x233178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x23317c: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x23317cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x233180: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x233180u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x233184: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x233184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x233188: 0xc08c1e6  jal         func_230798
    ctx->pc = 0x233188u;
    SET_GPR_U32(ctx, 31, 0x233190u);
    ctx->pc = 0x23318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233188u;
    // 0x23318c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x230798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230798u, 0x233188u, 0x233190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x233190u;
label_233190:
    // 0x233190: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x233194: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x233194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x233198: 0xc08c208  jal         func_230820
    ctx->pc = 0x233198u;
    SET_GPR_U32(ctx, 31, 0x2331A0u);
    ctx->pc = 0x23319Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x233198u;
    // 0x23319c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230820u, 0x233198u, 0x2331A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331A0u;
label_2331a0:
    // 0x2331a0: 0xc08c222  jal         func_230888
    ctx->pc = 0x2331A0u;
    SET_GPR_U32(ctx, 31, 0x2331A8u);
    ctx->pc = 0x2331A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331A0u;
    // 0x2331a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230888u, 0x2331A0u, 0x2331A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331A8u;
label_2331a8:
    // 0x2331a8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2331a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331ac: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2331acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2331b0: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2331b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331b4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2331b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331b8: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2331b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331bc: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2331bcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x2331c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2331c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2331c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2331c8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2331c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2331cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2331ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331d0: 0xc08daf8  jal         func_236BE0
    ctx->pc = 0x2331D0u;
    SET_GPR_U32(ctx, 31, 0x2331D8u);
    ctx->pc = 0x2331D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331D0u;
    // 0x2331d4: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236BE0u, 0x2331D0u, 0x2331D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331D8u;
label_2331d8:
    // 0x2331d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2331d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2331dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2331dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331e0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2331e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2331e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2331e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2331e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2331e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2331ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2331ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2331f0: 0xc08c22c  jal         func_2308B0
    ctx->pc = 0x2331F0u;
    SET_GPR_U32(ctx, 31, 0x2331F8u);
    ctx->pc = 0x2331F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2331F0u;
    // 0x2331f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2308B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2308B0u, 0x2331F0u, 0x2331F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2331F8u;
label_2331f8:
    // 0x2331f8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2331f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2331fc: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2331fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x233200: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x233200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x233204: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x233204u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x233208: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x233208u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23320c: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x23320cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x233210: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x233210u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x233214: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x233214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x233218: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x233218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x23321c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x23321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x233220: 0x3e00008  jr          $ra
    ctx->pc = 0x233220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x233220u;
        // 0x233224: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x233220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x233228u;
}
