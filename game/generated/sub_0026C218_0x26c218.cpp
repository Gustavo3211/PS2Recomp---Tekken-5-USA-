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

// Function: sub_0026C218
// Address: 0x26c218 - 0x26c2b8
void sub_0026C218_0x26c218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C218_0x26c218");
#endif

    switch (ctx->pc) {
        case 0x26c28cu: goto label_26c28c;
        case 0x26c29cu: goto label_26c29c;
        default: break;
    }

    ctx->pc = 0x26c218u;

    // 0x26c218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c21c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26c21cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26c220: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26c220u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c224: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x26c224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26c228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x26c22c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x26c22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x26c230: 0x94820044  lhu         $v0, 0x44($a0)
    ctx->pc = 0x26c230u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x26c234: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26C234u;
    {
        const bool branch_taken_0x26c234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C234u;
        // 0x26c238: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c234) {
            ctx->pc = 0x26C2A0u;
            goto label_26c2a0;
        }
    }
    ctx->pc = 0x26C23Cu;
    // 0x26c23c: 0x94820026  lhu         $v0, 0x26($a0)
    ctx->pc = 0x26c23cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x26c240: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26C240u;
    {
        const bool branch_taken_0x26c240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C240u;
        // 0x26c244: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c240) {
            ctx->pc = 0x26C2A4u;
            goto label_26c2a4;
        }
    }
    ctx->pc = 0x26C248u;
    // 0x26c248: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x26c248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x26c24c: 0x24030512  addiu       $v1, $zero, 0x512
    ctx->pc = 0x26c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1298));
    // 0x26c250: 0x30a2ffff  andi        $v0, $a1, 0xFFFF
    ctx->pc = 0x26c250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x26c254: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x26C254u;
    {
        const bool branch_taken_0x26c254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26C258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C254u;
        // 0x26c258: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c254) {
            ctx->pc = 0x26C2A0u;
            goto label_26c2a0;
        }
    }
    ctx->pc = 0x26C25Cu;
    // 0x26c25c: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26c25cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26c260: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x26C260u;
    {
        const bool branch_taken_0x26c260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C260u;
        // 0x26c264: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c260) {
            ctx->pc = 0x26C2A4u;
            goto label_26c2a4;
        }
    }
    ctx->pc = 0x26C268u;
    // 0x26c268: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x26c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x26c26c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26c26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26c270: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26c270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26c274: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26C274u;
    {
        const bool branch_taken_0x26c274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C274u;
        // 0x26c278: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c274) {
            ctx->pc = 0x26C2A4u;
            goto label_26c2a4;
        }
    }
    ctx->pc = 0x26C27Cu;
    // 0x26c27c: 0x8f82aa78  lw          $v0, -0x5588($gp)
    ctx->pc = 0x26c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945400)));
    // 0x26c280: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26c280u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c284: 0xc09ae62  jal         func_26B988
    ctx->pc = 0x26C284u;
    SET_GPR_U32(ctx, 31, 0x26C28Cu);
    ctx->pc = 0x26C288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C284u;
    // 0x26c288: 0x8c450018  lw          $a1, 0x18($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B988u, 0x26C284u, 0x26C28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C28Cu;
label_26c28c:
    // 0x26c28c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C28Cu;
    {
        const bool branch_taken_0x26c28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C28Cu;
        // 0x26c290: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c28c) {
            ctx->pc = 0x26C2A0u;
            goto label_26c2a0;
        }
    }
    ctx->pc = 0x26C294u;
    // 0x26c294: 0xc09ae76  jal         func_26B9D8
    ctx->pc = 0x26C294u;
    SET_GPR_U32(ctx, 31, 0x26C29Cu);
    ctx->pc = 0x26C298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C294u;
    // 0x26c298: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B9D8u, 0x26C294u, 0x26C29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C29Cu;
label_26c29c:
    // 0x26c29c: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x26c29cu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26c2a0:
    // 0x26c2a0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x26c2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26c2a4:
    // 0x26c2a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26c2a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26c2a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x26c2a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26c2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x26C2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C2B0u;
        // 0x26c2b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C2B8u;
}
