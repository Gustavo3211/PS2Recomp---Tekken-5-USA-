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

// Function: sub_002F7980
// Address: 0x2f7980 - 0x2f7a48
void sub_002F7980_0x2f7980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7980_0x2f7980");
#endif

    switch (ctx->pc) {
        case 0x2f79d0u: goto label_2f79d0;
        case 0x2f7a20u: goto label_2f7a20;
        default: break;
    }

    ctx->pc = 0x2f7980u;

    // 0x2f7980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f7980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f7984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7988: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f7988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f798c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f798cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7990: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f7990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f7994: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2f7994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2f7998: 0x26300164  addiu       $s0, $s1, 0x164
    ctx->pc = 0x2f7998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    // 0x2f799c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f79a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F79A0u;
    {
        const bool branch_taken_0x2f79a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F79A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79A0u;
        // 0x2f79a4: 0x26320100  addiu       $s2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79a0) {
            ctx->pc = 0x2F79BCu;
            goto label_2f79bc;
        }
    }
    ctx->pc = 0x2F79A8u;
    // 0x2f79a8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f79a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f79ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2f79acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f79b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f79b4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F79B4u;
    {
        const bool branch_taken_0x2f79b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f79b4) {
            ctx->pc = 0x2F79C8u;
            goto label_2f79c8;
        }
    }
    ctx->pc = 0x2F79BCu;
label_2f79bc:
    // 0x2f79bc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f79bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f79c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f79c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f79c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f79c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f79c8:
    // 0x2f79c8: 0xc0bdeb0  jal         func_2F7AC0
    ctx->pc = 0x2F79C8u;
    SET_GPR_U32(ctx, 31, 0x2F79D0u);
    ctx->pc = 0x2F79CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F79C8u;
    // 0x2f79cc: 0x8ca50118  lw          $a1, 0x118($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7AC0u, 0x2F79C8u, 0x2F79D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F79D0u;
label_2f79d0:
    // 0x2f79d0: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2f79d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2f79d4: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x2f79d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2f79d8: 0x8083003c  lb          $v1, 0x3C($a0)
    ctx->pc = 0x2f79d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x2f79dc: 0x14650014  bne         $v1, $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F79DCu;
    {
        const bool branch_taken_0x2f79dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2F79E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79DCu;
        // 0x2f79e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79dc) {
            ctx->pc = 0x2F7A30u;
            goto label_2f7a30;
        }
    }
    ctx->pc = 0x2F79E4u;
    // 0x2f79e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2f79e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f79e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F79E8u;
    {
        const bool branch_taken_0x2f79e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F79ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F79E8u;
        // 0x2f79ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f79e8) {
            ctx->pc = 0x2F7A00u;
            goto label_2f7a00;
        }
    }
    ctx->pc = 0x2F79F0u;
    // 0x2f79f0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2f79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f79f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f79f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f79f8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F79F8u;
    {
        const bool branch_taken_0x2f79f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f79f8) {
            ctx->pc = 0x2F79FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F79F8u;
            // 0x2f79fc: 0x8c830118  lw          $v1, 0x118($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7A10u;
            goto label_2f7a10;
        }
    }
    ctx->pc = 0x2F7A00u;
label_2f7a00:
    // 0x2f7a00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f7a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f7a04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f7a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7a08: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f7a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2f7a0c: 0x8c830118  lw          $v1, 0x118($a0)
    ctx->pc = 0x2f7a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x118u));
label_2f7a10:
    // 0x2f7a10: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F7A10u;
    {
        const bool branch_taken_0x2f7a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A10u;
        // 0x2f7a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7a10) {
            ctx->pc = 0x2F7A30u;
            goto label_2f7a30;
        }
    }
    ctx->pc = 0x2F7A18u;
    // 0x2f7a18: 0xc0853f0  jal         func_214FC0
    ctx->pc = 0x2F7A18u;
    SET_GPR_U32(ctx, 31, 0x2F7A20u);
    ctx->pc = 0x2F7A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7A18u;
    // 0x2f7a1c: 0x8e2400ec  lw          $a0, 0xEC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214FC0u, 0x2F7A18u, 0x2F7A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7A20u;
label_2f7a20:
    // 0x2f7a20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f7a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7a24: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x2f7a24u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x2f7a28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f7a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f7a2c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2f7a2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2f7a30:
    // 0x2f7a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7a34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f7a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7a38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f7a38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7a3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2f7a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f7a40: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7A40u;
        // 0x2f7a44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7A48u;
}
