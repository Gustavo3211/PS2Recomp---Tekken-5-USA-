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

// Function: sub_002F0158
// Address: 0x2f0158 - 0x2f01d8
void sub_002F0158_0x2f0158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0158_0x2f0158");
#endif

    switch (ctx->pc) {
        case 0x2f018cu: goto label_2f018c;
        case 0x2f01acu: goto label_2f01ac;
        case 0x2f01c0u: goto label_2f01c0;
        default: break;
    }

    ctx->pc = 0x2f0158u;

    // 0x2f0158: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f015c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0160: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f0160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0164: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f0164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f0168: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2f0168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f016c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2f016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2f0170: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2f0170u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f0174: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2f0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2f0178: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x2f0178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x2f017c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F017Cu;
    {
        const bool branch_taken_0x2f017c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F017Cu;
        // 0x2f0180: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f017c) {
            ctx->pc = 0x2F01C0u;
            goto label_2f01c0;
        }
    }
    ctx->pc = 0x2F0184u;
    // 0x2f0184: 0xc0ab858  jal         func_2AE160
    ctx->pc = 0x2F0184u;
    SET_GPR_U32(ctx, 31, 0x2F018Cu);
    ctx->pc = 0x2F0188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0184u;
    // 0x2f0188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE160u, 0x2F0184u, 0x2F018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F018Cu;
label_2f018c:
    // 0x2f018c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f018cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0190: 0x8e020120  lw          $v0, 0x120($s0)
    ctx->pc = 0x2f0190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x2f0194: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2f0194u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2f0198: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f0198u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f019c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F019Cu;
    {
        const bool branch_taken_0x2f019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F019Cu;
        // 0x2f01a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f019c) {
            ctx->pc = 0x2F01ACu;
            goto label_2f01ac;
        }
    }
    ctx->pc = 0x2F01A4u;
    // 0x2f01a4: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F01A4u;
    SET_GPR_U32(ctx, 31, 0x2F01ACu);
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F01A4u, 0x2F01ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01ACu;
label_2f01ac:
    // 0x2f01ac: 0x8e040124  lw          $a0, 0x124($s0)
    ctx->pc = 0x2f01acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x2f01b0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F01B0u;
    {
        const bool branch_taken_0x2f01b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01B0u;
        // 0x2f01b4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f01b0) {
            ctx->pc = 0x2F01C0u;
            goto label_2f01c0;
        }
    }
    ctx->pc = 0x2F01B8u;
    // 0x2f01b8: 0xc0ab3b4  jal         func_2ACED0
    ctx->pc = 0x2F01B8u;
    SET_GPR_U32(ctx, 31, 0x2F01C0u);
    ctx->pc = 0x2F01BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F01B8u;
    // 0x2f01bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACED0u, 0x2F01B8u, 0x2F01C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F01C0u;
label_2f01c0:
    // 0x2f01c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f01c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f01c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f01c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f01c8: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2f01c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f01cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F01CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F01CCu;
        // 0x2f01d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F01CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F01D4u;
    // 0x2f01d4: 0x0  nop
    ctx->pc = 0x2f01d4u;
    // NOP
    ctx->pc = 0x2f01d8u;
}
