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

// Function: sub_00509800
// Address: 0x509800 - 0x5098d0
void sub_00509800_0x509800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509800_0x509800");
#endif

    switch (ctx->pc) {
        case 0x509870u: goto label_509870;
        case 0x509878u: goto label_509878;
        case 0x509890u: goto label_509890;
        default: break;
    }

    ctx->pc = 0x509800u;

    // 0x509800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x509800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x509804: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509808: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x509808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x50980c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x50980cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509810: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x509810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x509814: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x509814u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509818: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x509818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x50981c: 0x3c13008f  lui         $s3, 0x8F
    ctx->pc = 0x50981cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)143 << 16));
    // 0x509820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x509820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x509824: 0x2447c5e4  addiu       $a3, $v0, -0x3A1C
    ctx->pc = 0x509824u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952420));
    // 0x509828: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x509828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x50982c: 0x3c05008f  lui         $a1, 0x8F
    ctx->pc = 0x50982cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)143 << 16));
    // 0x509830: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x509830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x509834: 0x3c06008f  lui         $a2, 0x8F
    ctx->pc = 0x509834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)143 << 16));
    // 0x509838: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x509838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x50983c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x50983cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x8EC5E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x8EC5E4u, _value); } while (0);
    // 0x509840: 0x962400b4  lhu         $a0, 0xB4($s1)
    ctx->pc = 0x509840u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 180)));
    // 0x509844: 0xa664c5e2  sh          $a0, -0x3A1E($s3)
    ctx->pc = 0x509844u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x8EC5E2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x8EC5E2u, _value); } while (0);
    // 0x509848: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x509848u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x50984c: 0x9622009e  lhu         $v0, 0x9E($s1)
    ctx->pc = 0x50984cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 158)));
    // 0x509850: 0xa4a2c5de  sh          $v0, -0x3A22($a1)
    ctx->pc = 0x509850u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294952414), (uint16_t)GPR_U32(ctx, 2));
    // 0x509854: 0x962300a0  lhu         $v1, 0xA0($s1)
    ctx->pc = 0x509854u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x509858: 0x18800014  blez        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x509858u;
    {
        const bool branch_taken_0x509858 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x50985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x509858u;
        // 0x50985c: 0xa4c3c5e0  sh          $v1, -0x3A20($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4294952416), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x509858) {
            ctx->pc = 0x5098ACu;
            goto label_5098ac;
        }
    }
    ctx->pc = 0x509860u;
    // 0x509860: 0x3c02008f  lui         $v0, 0x8F
    ctx->pc = 0x509860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)143 << 16));
    // 0x509864: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x509864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509868: 0x2454c5dc  addiu       $s4, $v0, -0x3A24
    ctx->pc = 0x509868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952412));
    // 0x50986c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x50986cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_509870:
    // 0x509870: 0xc13e412  jal         func_4F9048
    ctx->pc = 0x509870u;
    SET_GPR_U32(ctx, 31, 0x509878u);
    ctx->pc = 0x509874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509870u;
    // 0x509874: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F9048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F9048u, 0x509870u, 0x509878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509878u;
label_509878:
    // 0x509878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x509878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50987c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x50987cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x509880: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x509880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x509884: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x509884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x509888: 0xc14256e  jal         func_5095B8
    ctx->pc = 0x509888u;
    SET_GPR_U32(ctx, 31, 0x509890u);
    ctx->pc = 0x50988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x509888u;
    // 0x50988c: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5095B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5095B8u, 0x509888u, 0x509890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x509890u;
label_509890:
    // 0x509890: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x509890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x509894: 0x8663c5e2  lh          $v1, -0x3A1E($s3)
    ctx->pc = 0x509894u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294952418)));
    // 0x509898: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x509898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x50989c: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x50989cu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
    // 0x5098a0: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x5098a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x5098a4: 0x5460fff2  bnel        $v1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x5098A4u;
    {
        const bool branch_taken_0x5098a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x5098a4) {
            ctx->pc = 0x5098A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5098A4u;
            // 0x5098a8: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x509870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_509870;
        }
    }
    ctx->pc = 0x5098ACu;
label_5098ac:
    // 0x5098ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5098acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5098b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5098b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5098b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5098b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5098b8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5098b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5098bc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5098bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5098c0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x5098c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5098c4: 0x3e00008  jr          $ra
    ctx->pc = 0x5098C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5098C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5098C4u;
        // 0x5098c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x5098C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x5098CCu;
    // 0x5098cc: 0x0  nop
    ctx->pc = 0x5098ccu;
    // NOP
    ctx->pc = 0x5098d0u;
}
