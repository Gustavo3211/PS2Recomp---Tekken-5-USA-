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

// Function: sub_0012FCA0
// Address: 0x12fca0 - 0x12fd20
void sub_0012FCA0_0x12fca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FCA0_0x12fca0");
#endif

    switch (ctx->pc) {
        case 0x12fce0u: goto label_12fce0;
        case 0x12fd00u: goto label_12fd00;
        default: break;
    }

    ctx->pc = 0x12fca0u;

    // 0x12fca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12fca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12fca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12fca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12fca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12fca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12fcacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12fcb0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x12fcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12fcb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12fcb8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x12fcb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcbc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12fcc0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12fcc0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12fcc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x12fcc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x12fcc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FCC8u;
    {
        const bool branch_taken_0x12fcc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCC8u;
        // 0x12fccc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fcc8) {
            ctx->pc = 0x12FCE0u;
            goto label_12fce0;
        }
    }
    ctx->pc = 0x12FCD0u;
    // 0x12fcd0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12fcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12fcd4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x12fcd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fcd8: 0xc04bfde  jal         func_12FF78
    ctx->pc = 0x12FCD8u;
    SET_GPR_U32(ctx, 31, 0x12FCE0u);
    ctx->pc = 0x12FCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCD8u;
    // 0x12fcdc: 0x8605000e  lh          $a1, 0xE($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FF78u, 0x12FCD8u, 0x12FCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FCE0u;
label_12fce0:
    // 0x12fce0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12fce0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12fce4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12fce4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fce8: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x12fce8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x12fcec: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12fcecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fcf0: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x12fcf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x12fcf4: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x12fcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x12fcf8: 0xc04bf6a  jal         func_12FDA8
    ctx->pc = 0x12FCF8u;
    SET_GPR_U32(ctx, 31, 0x12FD00u);
    ctx->pc = 0x12FCFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FCF8u;
    // 0x12fcfc: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDA8u, 0x12FCF8u, 0x12FD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FD00u;
label_12fd00:
    // 0x12fd00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12fd00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12fd04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12fd04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12fd08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12fd08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12fd0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12fd0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12fd10: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12fd10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fd14: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12fd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fd18: 0x3e00008  jr          $ra
    ctx->pc = 0x12FD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FD18u;
        // 0x12fd1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FD20u;
}
