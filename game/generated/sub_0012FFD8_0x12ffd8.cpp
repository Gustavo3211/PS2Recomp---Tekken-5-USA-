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

// Function: sub_0012FFD8
// Address: 0x12ffd8 - 0x130038
void sub_0012FFD8_0x12ffd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012FFD8_0x12ffd8");
#endif

    switch (ctx->pc) {
        case 0x130008u: goto label_130008;
        default: break;
    }

    ctx->pc = 0x12ffd8u;

    // 0x12ffd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12ffdc: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x12ffdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x12ffe0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ffe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ffe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ffe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffe8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12ffe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12ffec: 0x24515578  addiu       $s1, $v0, 0x5578
    ctx->pc = 0x12ffecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21880));
    // 0x12fff0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x12fff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fff4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x12fff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fff8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x12fff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fffc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12fffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x130000: 0xc043e7a  jal         func_10F9E8
    ctx->pc = 0x130000u;
    SET_GPR_U32(ctx, 31, 0x130008u);
    ctx->pc = 0x130004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130000u;
    // 0x130004: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9E8u, 0x130000u, 0x130008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130008u;
label_130008:
    // 0x130008: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x130008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13000c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x13000cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x130010: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x130010u;
    {
        const bool branch_taken_0x130010 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x130014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130010u;
        // 0x130014: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130010) {
            ctx->pc = 0x130024u;
            goto label_130024;
        }
    }
    ctx->pc = 0x130018u;
    // 0x130018: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x130018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13001c: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13001Cu;
    {
        const bool branch_taken_0x13001c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13001c) {
            ctx->pc = 0x130020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13001Cu;
            // 0x130020: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x130024u;
            goto label_130024;
        }
    }
    ctx->pc = 0x130024u;
label_130024:
    // 0x130024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13002c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13002cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130030: 0x3e00008  jr          $ra
    ctx->pc = 0x130030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130030u;
        // 0x130034: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130030u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130038u;
}
