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

// Function: sub_0024C1D0
// Address: 0x24c1d0 - 0x24c290
void sub_0024C1D0_0x24c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024C1D0_0x24c1d0");
#endif

    switch (ctx->pc) {
        case 0x24c268u: goto label_24c268;
        case 0x24c27cu: goto label_24c27c;
        default: break;
    }

    ctx->pc = 0x24c1d0u;

    // 0x24c1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24c1d4: 0x30c2f000  andi        $v0, $a2, 0xF000
    ctx->pc = 0x24c1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)61440);
    // 0x24c1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24c1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24c1dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24c1dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24c1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24c1e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24c1e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24c1e8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x24C1E8u;
    {
        const bool branch_taken_0x24c1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1E8u;
        // 0x24c1ec: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1e8) {
            ctx->pc = 0x24C27Cu;
            goto label_24c27c;
        }
    }
    ctx->pc = 0x24C1F0u;
    // 0x24c1f0: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x24c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x24c1f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24C1F4u;
    {
        const bool branch_taken_0x24c1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1F4u;
        // 0x24c1f8: 0x30c22000  andi        $v0, $a2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1f4) {
            ctx->pc = 0x24C238u;
            goto label_24c238;
        }
    }
    ctx->pc = 0x24C1FCu;
    // 0x24c1fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24C1FCu;
    {
        const bool branch_taken_0x24c1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C1FCu;
        // 0x24c200: 0x30c28000  andi        $v0, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c1fc) {
            ctx->pc = 0x24C210u;
            goto label_24c210;
        }
    }
    ctx->pc = 0x24C204u;
    // 0x24c204: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x24C204u;
    {
        const bool branch_taken_0x24c204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C204u;
        // 0x24c208: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c204) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C20Cu;
    // 0x24c20c: 0x0  nop
    ctx->pc = 0x24c20cu;
    // NOP
label_24c210:
    // 0x24c210: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x24C210u;
    {
        const bool branch_taken_0x24c210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C210u;
        // 0x24c214: 0x30c21000  andi        $v0, $a2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c210) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C218u;
    // 0x24c218: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x24C218u;
    {
        const bool branch_taken_0x24c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c218) {
            ctx->pc = 0x24C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C218u;
            // 0x24c21c: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C220u;
    // 0x24c220: 0x30c24000  andi        $v0, $a2, 0x4000
    ctx->pc = 0x24c220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
    // 0x24c224: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24C224u;
    {
        const bool branch_taken_0x24c224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24c224) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C22Cu;
    // 0x24c22c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24C22Cu;
    {
        const bool branch_taken_0x24c22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C22Cu;
        // 0x24c230: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c22c) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C234u;
    // 0x24c234: 0x0  nop
    ctx->pc = 0x24c234u;
    // NOP
label_24c238:
    // 0x24c238: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24C238u;
    {
        const bool branch_taken_0x24c238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C238u;
        // 0x24c23c: 0x30c28000  andi        $v0, $a2, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c238) {
            ctx->pc = 0x24C248u;
            goto label_24c248;
        }
    }
    ctx->pc = 0x24C240u;
    // 0x24c240: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24C240u;
    {
        const bool branch_taken_0x24c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C240u;
        // 0x24c244: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c240) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C248u;
label_24c248:
    // 0x24c248: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x24C248u;
    {
        const bool branch_taken_0x24c248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24c248) {
            ctx->pc = 0x24C24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24C248u;
            // 0x24c24c: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C250u;
    // 0x24c250: 0x30c21000  andi        $v0, $a2, 0x1000
    ctx->pc = 0x24c250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x24c254: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24C254u;
    {
        const bool branch_taken_0x24c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C254u;
        // 0x24c258: 0x30c24000  andi        $v0, $a2, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24c254) {
            ctx->pc = 0x24C260u;
            goto label_24c260;
        }
    }
    ctx->pc = 0x24C25Cu;
    // 0x24c25c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x24c25cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24c260:
    // 0x24c260: 0xc092e94  jal         func_24BA50
    ctx->pc = 0x24C260u;
    SET_GPR_U32(ctx, 31, 0x24C268u);
    ctx->pc = 0x24C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C260u;
    // 0x24c264: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24BA50u, 0x24C260u, 0x24C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C268u;
label_24c268:
    // 0x24c268: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x24c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x24c26c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x24c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x24c270: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x24c270u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x24c274: 0xc092940  jal         func_24A500
    ctx->pc = 0x24C274u;
    SET_GPR_U32(ctx, 31, 0x24C27Cu);
    ctx->pc = 0x24C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24C274u;
    // 0x24c278: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24A500u, 0x24C274u, 0x24C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24C27Cu;
label_24c27c:
    // 0x24c27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24c27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24c280: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24c280u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24c284: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24c284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24c288: 0x3e00008  jr          $ra
    ctx->pc = 0x24C288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24C28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24C288u;
        // 0x24c28c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24C288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24C290u;
}
