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

// Function: sub_002FB1E0
// Address: 0x2fb1e0 - 0x2fb278
void sub_002FB1E0_0x2fb1e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB1E0_0x2fb1e0");
#endif

    switch (ctx->pc) {
        case 0x2fb214u: goto label_2fb214;
        default: break;
    }

    ctx->pc = 0x2fb1e0u;

    // 0x2fb1e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb1e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb1e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fb1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb1e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fb1e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fb1ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2fb1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb1f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fb1f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fb1f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fb1f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fb1f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fb1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fb1fc: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FB1FCu;
    {
        const bool branch_taken_0x2fb1fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB1FCu;
        // 0x2fb200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb1fc) {
            ctx->pc = 0x2FB264u;
            goto label_2fb264;
        }
    }
    ctx->pc = 0x2FB204u;
    // 0x2fb204: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2fb204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2fb208: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2fb208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2fb20c: 0xc0ae45a  jal         func_2B9168
    ctx->pc = 0x2FB20Cu;
    SET_GPR_U32(ctx, 31, 0x2FB214u);
    ctx->pc = 0x2FB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FB20Cu;
    // 0x2fb210: 0x90450098  lbu         $a1, 0x98($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9168u, 0x2FB20Cu, 0x2FB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FB214u;
label_2fb214:
    // 0x2fb214: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2fb214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2fb218: 0x90830099  lbu         $v1, 0x99($a0)
    ctx->pc = 0x2fb218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 153)));
    // 0x2fb21c: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x2fb21cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb220: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2fb220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2fb224: 0x9083009a  lbu         $v1, 0x9A($a0)
    ctx->pc = 0x2fb224u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 154)));
    // 0x2fb228: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x2fb228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb22c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2fb22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2fb230: 0x9083009b  lbu         $v1, 0x9B($a0)
    ctx->pc = 0x2fb230u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 155)));
    // 0x2fb234: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2fb234u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb238: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2fb238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2fb23c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2FB23Cu;
    {
        const bool branch_taken_0x2fb23c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB23Cu;
        // 0x2fb240: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb23c) {
            ctx->pc = 0x2FB264u;
            goto label_2fb264;
        }
    }
    ctx->pc = 0x2FB244u;
    // 0x2fb244: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x2fb244u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2fb248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fb248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb24c: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x2fb24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2fb250: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x2fb250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x2fb254: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x2fb254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x2fb258: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fb258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fb25c: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x2fb25cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x2fb260: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2fb260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_2fb264:
    // 0x2fb264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fb264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fb268: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fb268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fb26c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fb26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fb270: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB270u;
        // 0x2fb274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB278u;
}
