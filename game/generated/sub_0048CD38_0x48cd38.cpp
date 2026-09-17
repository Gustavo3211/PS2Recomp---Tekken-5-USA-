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

// Function: sub_0048CD38
// Address: 0x48cd38 - 0x48cde0
void sub_0048CD38_0x48cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048CD38_0x48cd38");
#endif

    switch (ctx->pc) {
        case 0x48cd74u: goto label_48cd74;
        case 0x48cdc4u: goto label_48cdc4;
        default: break;
    }

    ctx->pc = 0x48cd38u;

    // 0x48cd38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48cd38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x48cd3c: 0x3c02007c  lui         $v0, 0x7C
    ctx->pc = 0x48cd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)124 << 16));
    // 0x48cd40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x48cd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x48cd44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x48cd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x48cd48: 0x24425b80  addiu       $v0, $v0, 0x5B80
    ctx->pc = 0x48cd48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23424));
    // 0x48cd4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48cd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x48cd50: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x48cd50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x48cd54: 0x35295cc0  ori         $t1, $t1, 0x5CC0
    ctx->pc = 0x48cd54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)23744);
    // 0x48cd58: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x48cd58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x48cd5c: 0x8d300000  lw          $s0, 0x0($t1)
    ctx->pc = 0x48cd5cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x7DB840u));
    // 0x48cd60: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x48cd60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x48cd64: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48CD64u;
    {
        const bool branch_taken_0x48cd64 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x48CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CD64u;
        // 0x48cd68: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cd64) {
            ctx->pc = 0x48CD80u;
            goto label_48cd80;
        }
    }
    ctx->pc = 0x48CD6Cu;
    // 0x48cd6c: 0xc123378  jal         func_48CDE0
    ctx->pc = 0x48CD6Cu;
    SET_GPR_U32(ctx, 31, 0x48CD74u);
    ctx->pc = 0x48CDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CDE0u, 0x48CD6Cu, 0x48CD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CD74u;
label_48cd74:
    // 0x48cd74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48cd74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48cd78: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x48CD78u;
    {
        const bool branch_taken_0x48cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CD78u;
        // 0x48cd7c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cd78) {
            ctx->pc = 0x48CDCCu;
            goto label_48cdcc;
        }
    }
    ctx->pc = 0x48CD80u;
label_48cd80:
    // 0x48cd80: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x48cd80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x48cd84: 0x8e080000  lw          $t0, 0x0($s0)
    ctx->pc = 0x48cd84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x48cd88: 0x2484d680  addiu       $a0, $a0, -0x2980
    ctx->pc = 0x48cd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
    // 0x48cd8c: 0x24852370  addiu       $a1, $a0, 0x2370
    ctx->pc = 0x48cd8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 9072));
    // 0x48cd90: 0x24862372  addiu       $a2, $a0, 0x2372
    ctx->pc = 0x48cd90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 9074));
    // 0x48cd94: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x48cd94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x72F9F0u));
    // 0x48cd98: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x48cd98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x72F9F2u));
    // 0x48cd9c: 0x84870090  lh          $a3, 0x90($a0)
    ctx->pc = 0x48cd9cu;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x72D710u));
    // 0x48cda0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x48cda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x48cda4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48cda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48cda8: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x48cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x48cdac: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x48cdacu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9F0u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9F0u, _value); } while (0);
    // 0x48cdb0: 0xa4c30000  sh          $v1, 0x0($a2)
    ctx->pc = 0x48cdb0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9F2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9F2u, _value); } while (0);
    // 0x48cdb4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x48CDB4u;
    {
        const bool branch_taken_0x48cdb4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48CDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CDB4u;
        // 0x48cdb8: 0xac902374  sw          $s0, 0x2374($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 9076), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48cdb4) {
            ctx->pc = 0x48CDC4u;
            goto label_48cdc4;
        }
    }
    ctx->pc = 0x48CDBCu;
    // 0x48cdbc: 0xc12337a  jal         func_48CDE8
    ctx->pc = 0x48CDBCu;
    SET_GPR_U32(ctx, 31, 0x48CDC4u);
    ctx->pc = 0x48CDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CDBCu;
    // 0x48cdc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CDE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CDE8u, 0x48CDBCu, 0x48CDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CDC4u;
label_48cdc4:
    // 0x48cdc4: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x48cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x48cdc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48cdcc:
    // 0x48cdcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x48cdccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48cdd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x48cdd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x48cdd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48cdd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48cdd8: 0x3e00008  jr          $ra
    ctx->pc = 0x48CDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CDD8u;
        // 0x48cddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CDE0u;
}
