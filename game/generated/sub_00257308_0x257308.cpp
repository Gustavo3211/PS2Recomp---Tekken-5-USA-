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

// Function: sub_00257308
// Address: 0x257308 - 0x257378
void sub_00257308_0x257308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257308_0x257308");
#endif

    switch (ctx->pc) {
        case 0x257344u: goto label_257344;
        default: break;
    }

    ctx->pc = 0x257308u;

    // 0x257308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x257308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25730c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x257310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x257310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257314: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x257314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x257318: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x257318u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25731c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25731cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x257320: 0x90a201bb  lbu         $v0, 0x1BB($a1)
    ctx->pc = 0x257320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 443)));
    // 0x257324: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x257324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x257328: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x257328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x25732c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25732Cu;
    {
        const bool branch_taken_0x25732c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x257330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25732Cu;
        // 0x257330: 0xae02005c  sw          $v0, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25732c) {
            ctx->pc = 0x25733Cu;
            goto label_25733c;
        }
    }
    ctx->pc = 0x257334u;
    // 0x257334: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x257334u;
    {
        const bool branch_taken_0x257334 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x257338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257334u;
        // 0x257338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257334) {
            ctx->pc = 0x257358u;
            goto label_257358;
        }
    }
    ctx->pc = 0x25733Cu;
label_25733c:
    // 0x25733c: 0xc08c696  jal         func_231A58
    ctx->pc = 0x25733Cu;
    SET_GPR_U32(ctx, 31, 0x257344u);
    ctx->pc = 0x231A58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A58u, 0x25733Cu, 0x257344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x257344u;
label_257344:
    // 0x257344: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x257344u;
    {
        const bool branch_taken_0x257344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x257348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257344u;
        // 0x257348: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257344) {
            ctx->pc = 0x257358u;
            goto label_257358;
        }
    }
    ctx->pc = 0x25734Cu;
    // 0x25734c: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x25734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x257350: 0x12220002  beq         $s1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x257350u;
    {
        const bool branch_taken_0x257350 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x257354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257350u;
        // 0x257354: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257350) {
            ctx->pc = 0x25735Cu;
            goto label_25735c;
        }
    }
    ctx->pc = 0x257358u;
label_257358:
    // 0x257358: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x257358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
label_25735c:
    // 0x25735c: 0xae110068  sw          $s1, 0x68($s0)
    ctx->pc = 0x25735cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 17));
    // 0x257360: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x257360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x257364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x257368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25736c: 0x3e00008  jr          $ra
    ctx->pc = 0x25736Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25736Cu;
        // 0x257370: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25736Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257374u;
    // 0x257374: 0x0  nop
    ctx->pc = 0x257374u;
    // NOP
    ctx->pc = 0x257378u;
}
