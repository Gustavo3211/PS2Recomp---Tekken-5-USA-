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

// Function: sub_00113958
// Address: 0x113958 - 0x113a48
void sub_00113958_0x113958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113958_0x113958");
#endif

    switch (ctx->pc) {
        case 0x1139b0u: goto label_1139b0;
        case 0x1139d8u: goto label_1139d8;
        case 0x1139f4u: goto label_1139f4;
        default: break;
    }

    ctx->pc = 0x113958u;

    // 0x113958: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x113958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11395c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x11395cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x113960: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x113960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x113964: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x113964u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113968: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x113968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x11396c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x11396cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113970: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x113970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x113974: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x113974u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113978: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x113978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x11397c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x11397cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113980: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x113980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x113984: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x113984u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113988: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x113988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11398c: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x11398cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113990: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x113990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x113994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x113994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113998: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x113998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11399c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11399cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1139a0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1139a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1139a4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1139a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1139a8: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x1139a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x1139ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1139acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1139b0:
    // 0x1139b0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1139b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139b4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1139b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1139b8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x1139b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139bc: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x1139bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1139c0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1139c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139c4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1139c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1139c8: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x1139c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139cc: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x1139ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1139d0: 0xc044c2c  jal         func_1130B0
    ctx->pc = 0x1139D0u;
    SET_GPR_U32(ctx, 31, 0x1139D8u);
    ctx->pc = 0x1139D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139D0u;
    // 0x1139d4: 0x260582d  daddu       $t3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1130B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1130B0u, 0x1139D0u, 0x1139D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139D8u;
label_1139d8:
    // 0x1139d8: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x1139d8u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1139dc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1139DCu;
    {
        const bool branch_taken_0x1139dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1139E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139DCu;
        // 0x1139e0: 0x8fa200c8  lw          $v0, 0xC8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139dc) {
            ctx->pc = 0x113A10u;
            goto label_113a10;
        }
    }
    ctx->pc = 0x1139E4u;
    // 0x1139e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1139E4u;
    {
        const bool branch_taken_0x1139e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1139E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1139E4u;
        // 0x1139e8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1139e4) {
            ctx->pc = 0x113A10u;
            goto label_113a10;
        }
    }
    ctx->pc = 0x1139ECu;
    // 0x1139ec: 0xc044106  jal         func_110418
    ctx->pc = 0x1139ECu;
    SET_GPR_U32(ctx, 31, 0x1139F4u);
    ctx->pc = 0x1139F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1139ECu;
    // 0x1139f0: 0x2222018  mult        $a0, $s1, $v0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x110418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110418u, 0x1139ECu, 0x1139F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1139F4u;
label_1139f4:
    // 0x1139f4: 0x2a23007f  slti        $v1, $s1, 0x7F
    ctx->pc = 0x1139f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)127) ? 1 : 0);
    // 0x1139f8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1139F8u;
    {
        const bool branch_taken_0x1139f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1139f8) {
            ctx->pc = 0x1139FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1139F8u;
            // 0x1139fc: 0x118840  sll         $s1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113A00u;
            goto label_113a00;
        }
    }
    ctx->pc = 0x113A00u;
label_113a00:
    // 0x113a00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x113a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x113a04: 0x2a420065  slti        $v0, $s2, 0x65
    ctx->pc = 0x113a04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x113a08: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x113A08u;
    {
        const bool branch_taken_0x113a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A08u;
        // 0x113a0c: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113a08) {
            ctx->pc = 0x1139B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1139b0;
        }
    }
    ctx->pc = 0x113A10u;
label_113a10:
    // 0x113a10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x113a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113a14: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x113a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x113a18: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x113a18u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x113a1c: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x113a1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x113a20: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x113a20u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x113a24: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x113a24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x113a28: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x113a28u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113a2c: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x113a2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113a30: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x113a30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x113a34: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x113a34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113a38: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x113a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x113A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113A3Cu;
        // 0x113a40: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113A44u;
    // 0x113a44: 0x0  nop
    ctx->pc = 0x113a44u;
    // NOP
    ctx->pc = 0x113a48u;
}
