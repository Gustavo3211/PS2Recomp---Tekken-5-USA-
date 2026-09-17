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

// Function: sub_00331568
// Address: 0x331568 - 0x3315f8
void sub_00331568_0x331568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331568_0x331568");
#endif

    switch (ctx->pc) {
        case 0x331568u: goto label_331568;
        case 0x33156cu: goto label_33156c;
        case 0x331570u: goto label_331570;
        case 0x331574u: goto label_331574;
        case 0x331578u: goto label_331578;
        case 0x33157cu: goto label_33157c;
        case 0x331580u: goto label_331580;
        case 0x331584u: goto label_331584;
        case 0x331588u: goto label_331588;
        case 0x33158cu: goto label_33158c;
        case 0x331590u: goto label_331590;
        case 0x331594u: goto label_331594;
        case 0x331598u: goto label_331598;
        case 0x33159cu: goto label_33159c;
        case 0x3315a0u: goto label_3315a0;
        case 0x3315a4u: goto label_3315a4;
        case 0x3315a8u: goto label_3315a8;
        case 0x3315acu: goto label_3315ac;
        case 0x3315b0u: goto label_3315b0;
        case 0x3315b4u: goto label_3315b4;
        case 0x3315b8u: goto label_3315b8;
        case 0x3315bcu: goto label_3315bc;
        case 0x3315c0u: goto label_3315c0;
        case 0x3315c4u: goto label_3315c4;
        case 0x3315c8u: goto label_3315c8;
        case 0x3315ccu: goto label_3315cc;
        case 0x3315d0u: goto label_3315d0;
        case 0x3315d4u: goto label_3315d4;
        case 0x3315d8u: goto label_3315d8;
        case 0x3315dcu: goto label_3315dc;
        case 0x3315e0u: goto label_3315e0;
        case 0x3315e4u: goto label_3315e4;
        case 0x3315e8u: goto label_3315e8;
        case 0x3315ecu: goto label_3315ec;
        case 0x3315f0u: goto label_3315f0;
        case 0x3315f4u: goto label_3315f4;
        default: break;
    }

    ctx->pc = 0x331568u;

label_331568:
    // 0x331568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x331568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_33156c:
    // 0x33156c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33156cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_331570:
    // 0x331570: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x331570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_331574:
    // 0x331574: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x331574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_331578:
    // 0x331578: 0x8f90c594  lw          $s0, -0x3A6C($gp)
    ctx->pc = 0x331578u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294952340)));
label_33157c:
    // 0x33157c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x33157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_331580:
    // 0x331580: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x331580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_331584:
    // 0x331584: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x331584u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_331588:
    // 0x331588: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x331588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_33158c:
    // 0x33158c: 0x60f809  jalr        $v1
label_331590:
    if (ctx->pc == 0x331590u) {
        ctx->pc = 0x331590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33158Cu;
        // 0x331590: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x331594u;
        goto label_331594;
    }
    ctx->pc = 0x33158Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x331594u);
        ctx->pc = 0x331590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33158Cu;
        // 0x331590: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33158Cu, 0x331594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x331594u;
label_331594:
    // 0x331594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331598:
    // 0x331598: 0xc0c6c2a  jal         func_31B0A8
label_33159c:
    if (ctx->pc == 0x33159Cu) {
        ctx->pc = 0x33159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331598u;
        // 0x33159c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3315A0u;
        goto label_3315a0;
    }
    ctx->pc = 0x331598u;
    SET_GPR_U32(ctx, 31, 0x3315A0u);
    ctx->pc = 0x33159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331598u;
    // 0x33159c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31B0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31B0A8u, 0x331598u, 0x3315A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3315A0u;
label_3315a0:
    // 0x3315a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3315a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3315a4:
    // 0x3315a4: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x3315a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_3315a8:
    // 0x3315a8: 0x30640001  andi        $a0, $v1, 0x1
    ctx->pc = 0x3315a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3315ac:
    // 0x3315ac: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_3315b0:
    if (ctx->pc == 0x3315B0u) {
        ctx->pc = 0x3315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315ACu;
        // 0x3315b0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3315B4u;
        goto label_3315b4;
    }
    ctx->pc = 0x3315ACu;
    {
        const bool branch_taken_0x3315ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3315B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315ACu;
        // 0x3315b0: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3315ac) {
            ctx->pc = 0x3315C8u;
            goto label_3315c8;
        }
    }
    ctx->pc = 0x3315B4u;
label_3315b4:
    // 0x3315b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3315b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3315b8:
    // 0x3315b8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3315b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3315bc:
    // 0x3315bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3315c0:
    if (ctx->pc == 0x3315C0u) {
        ctx->pc = 0x3315C4u;
        goto label_3315c4;
    }
    ctx->pc = 0x3315BCu;
    {
        const bool branch_taken_0x3315bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3315bc) {
            ctx->pc = 0x3315D4u;
            goto label_3315d4;
        }
    }
    ctx->pc = 0x3315C4u;
label_3315c4:
    // 0x3315c4: 0x0  nop
    ctx->pc = 0x3315c4u;
    // NOP
label_3315c8:
    // 0x3315c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3315c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3315cc:
    // 0x3315cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3315ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3315d0:
    // 0x3315d0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3315d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3315d4:
    // 0x3315d4: 0x0  nop
    ctx->pc = 0x3315d4u;
    // NOP
label_3315d8:
    // 0x3315d8: 0x0  nop
    ctx->pc = 0x3315d8u;
    // NOP
label_3315dc:
    // 0x3315dc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3315dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[0];
label_3315e0:
    // 0x3315e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3315e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3315e4:
    // 0x3315e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3315e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3315e8:
    // 0x3315e8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3315e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3315ec:
    // 0x3315ec: 0x3e00008  jr          $ra
label_3315f0:
    if (ctx->pc == 0x3315F0u) {
        ctx->pc = 0x3315F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315ECu;
        // 0x3315f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3315F4u;
        goto label_3315f4;
    }
    ctx->pc = 0x3315ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3315F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3315ECu;
        // 0x3315f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3315ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3315F4u;
label_3315f4:
    // 0x3315f4: 0x0  nop
    ctx->pc = 0x3315f4u;
    // NOP
    ctx->pc = 0x3315f8u;
}
