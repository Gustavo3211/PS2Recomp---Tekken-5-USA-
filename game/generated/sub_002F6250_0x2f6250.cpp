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

// Function: sub_002F6250
// Address: 0x2f6250 - 0x2f62f8
void sub_002F6250_0x2f6250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6250_0x2f6250");
#endif

    switch (ctx->pc) {
        case 0x2f62a0u: goto label_2f62a0;
        case 0x2f62dcu: goto label_2f62dc;
        default: break;
    }

    ctx->pc = 0x2f6250u;

    // 0x2f6250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f6250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f6254: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6258: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f6258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f625c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f625cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f6260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2f6264: 0x26300148  addiu       $s0, $s1, 0x148
    ctx->pc = 0x2f6264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 328));
    // 0x2f6268: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f6268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f626c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F626Cu;
    {
        const bool branch_taken_0x2f626c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f626c) {
            ctx->pc = 0x2F6270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F626Cu;
            // 0x2f6270: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6288u;
            goto label_2f6288;
        }
    }
    ctx->pc = 0x2F6274u;
    // 0x2f6274: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f6274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f6278: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f6278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f627c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F627Cu;
    {
        const bool branch_taken_0x2f627c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f627c) {
            ctx->pc = 0x2F6280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F627Cu;
            // 0x2f6280: 0x8e260104  lw          $a2, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F6294u;
            goto label_2f6294;
        }
    }
    ctx->pc = 0x2F6284u;
    // 0x2f6284: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f6284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f6288:
    // 0x2f6288: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f6288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f628c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f628cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2f6290: 0x8e260104  lw          $a2, 0x104($s1)
    ctx->pc = 0x2f6290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_2f6294:
    // 0x2f6294: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f6294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f6298: 0xc0bd4a8  jal         func_2F52A0
    ctx->pc = 0x2F6298u;
    SET_GPR_U32(ctx, 31, 0x2F62A0u);
    ctx->pc = 0x2F629Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6298u;
    // 0x2f629c: 0x8e27004c  lw          $a3, 0x4C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F52A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F52A0u, 0x2F6298u, 0x2F62A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62A0u;
label_2f62a0:
    // 0x2f62a0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2F62A0u;
    {
        const bool branch_taken_0x2f62a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f62a0) {
            ctx->pc = 0x2F62A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F62A0u;
            // 0x2f62a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F62E4u;
            goto label_2f62e4;
        }
    }
    ctx->pc = 0x2F62A8u;
    // 0x2f62a8: 0xae200150  sw          $zero, 0x150($s1)
    ctx->pc = 0x2f62a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 336), GPR_U32(ctx, 0));
    // 0x2f62ac: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f62acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f62b0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F62B0u;
    {
        const bool branch_taken_0x2f62b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f62b0) {
            ctx->pc = 0x2F62B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F62B0u;
            // 0x2f62b4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F62CCu;
            goto label_2f62cc;
        }
    }
    ctx->pc = 0x2F62B8u;
    // 0x2f62b8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2f62b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f62bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2f62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f62c0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F62C0u;
    {
        const bool branch_taken_0x2f62c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f62c0) {
            ctx->pc = 0x2F62D4u;
            goto label_2f62d4;
        }
    }
    ctx->pc = 0x2F62C8u;
    // 0x2f62c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f62c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f62cc:
    // 0x2f62cc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f62ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f62d0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f62d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f62d4:
    // 0x2f62d4: 0xc0bd5ee  jal         func_2F57B8
    ctx->pc = 0x2F62D4u;
    SET_GPR_U32(ctx, 31, 0x2F62DCu);
    ctx->pc = 0x2F62D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F62D4u;
    // 0x2f62d8: 0x8e250104  lw          $a1, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F57B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F57B8u, 0x2F62D4u, 0x2F62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F62DCu;
label_2f62dc:
    // 0x2f62dc: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x2f62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
    // 0x2f62e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f62e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f62e4:
    // 0x2f62e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f62e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f62e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f62e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f62ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2F62ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F62F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F62ECu;
        // 0x2f62f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F62ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F62F4u;
    // 0x2f62f4: 0x0  nop
    ctx->pc = 0x2f62f4u;
    // NOP
    ctx->pc = 0x2f62f8u;
}
