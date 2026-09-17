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

// Function: sub_002EC920
// Address: 0x2ec920 - 0x2ec9d8
void sub_002EC920_0x2ec920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EC920_0x2ec920");
#endif

    switch (ctx->pc) {
        case 0x2ec920u: goto label_2ec920;
        case 0x2ec924u: goto label_2ec924;
        case 0x2ec928u: goto label_2ec928;
        case 0x2ec92cu: goto label_2ec92c;
        case 0x2ec930u: goto label_2ec930;
        case 0x2ec934u: goto label_2ec934;
        case 0x2ec938u: goto label_2ec938;
        case 0x2ec93cu: goto label_2ec93c;
        case 0x2ec940u: goto label_2ec940;
        case 0x2ec944u: goto label_2ec944;
        case 0x2ec948u: goto label_2ec948;
        case 0x2ec94cu: goto label_2ec94c;
        case 0x2ec950u: goto label_2ec950;
        case 0x2ec954u: goto label_2ec954;
        case 0x2ec958u: goto label_2ec958;
        case 0x2ec95cu: goto label_2ec95c;
        case 0x2ec960u: goto label_2ec960;
        case 0x2ec964u: goto label_2ec964;
        case 0x2ec968u: goto label_2ec968;
        case 0x2ec96cu: goto label_2ec96c;
        case 0x2ec970u: goto label_2ec970;
        case 0x2ec974u: goto label_2ec974;
        case 0x2ec978u: goto label_2ec978;
        case 0x2ec97cu: goto label_2ec97c;
        case 0x2ec980u: goto label_2ec980;
        case 0x2ec984u: goto label_2ec984;
        case 0x2ec988u: goto label_2ec988;
        case 0x2ec98cu: goto label_2ec98c;
        case 0x2ec990u: goto label_2ec990;
        case 0x2ec994u: goto label_2ec994;
        case 0x2ec998u: goto label_2ec998;
        case 0x2ec99cu: goto label_2ec99c;
        case 0x2ec9a0u: goto label_2ec9a0;
        case 0x2ec9a4u: goto label_2ec9a4;
        case 0x2ec9a8u: goto label_2ec9a8;
        case 0x2ec9acu: goto label_2ec9ac;
        case 0x2ec9b0u: goto label_2ec9b0;
        case 0x2ec9b4u: goto label_2ec9b4;
        case 0x2ec9b8u: goto label_2ec9b8;
        case 0x2ec9bcu: goto label_2ec9bc;
        case 0x2ec9c0u: goto label_2ec9c0;
        case 0x2ec9c4u: goto label_2ec9c4;
        case 0x2ec9c8u: goto label_2ec9c8;
        case 0x2ec9ccu: goto label_2ec9cc;
        case 0x2ec9d0u: goto label_2ec9d0;
        case 0x2ec9d4u: goto label_2ec9d4;
        default: break;
    }

    ctx->pc = 0x2ec920u;

label_2ec920:
    // 0x2ec920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ec920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ec924:
    // 0x2ec924: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ec924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ec928:
    // 0x2ec928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ec928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2ec92c:
    // 0x2ec92c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ec92cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ec930:
    // 0x2ec930: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ec930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2ec934:
    // 0x2ec934: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x2ec934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_2ec938:
    // 0x2ec938: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2ec93c:
    if (ctx->pc == 0x2EC93Cu) {
        ctx->pc = 0x2EC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC938u;
        // 0x2ec93c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC940u;
        goto label_2ec940;
    }
    ctx->pc = 0x2EC938u;
    {
        const bool branch_taken_0x2ec938 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC938u;
        // 0x2ec93c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec938) {
            ctx->pc = 0x2EC970u;
            goto label_2ec970;
        }
    }
    ctx->pc = 0x2EC940u;
label_2ec940:
    // 0x2ec940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ec944:
    if (ctx->pc == 0x2EC944u) {
        ctx->pc = 0x2EC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC940u;
        // 0x2ec944: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC948u;
        goto label_2ec948;
    }
    ctx->pc = 0x2EC940u;
    {
        const bool branch_taken_0x2ec940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC940u;
        // 0x2ec944: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec940) {
            ctx->pc = 0x2EC958u;
            goto label_2ec958;
        }
    }
    ctx->pc = 0x2EC948u;
label_2ec948:
    // 0x2ec948: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2ec94c:
    if (ctx->pc == 0x2EC94Cu) {
        ctx->pc = 0x2EC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC948u;
        // 0x2ec94c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC950u;
        goto label_2ec950;
    }
    ctx->pc = 0x2EC948u;
    {
        const bool branch_taken_0x2ec948 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC948u;
        // 0x2ec94c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec948) {
            ctx->pc = 0x2EC998u;
            goto label_2ec998;
        }
    }
    ctx->pc = 0x2EC950u;
label_2ec950:
    // 0x2ec950: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2ec954:
    if (ctx->pc == 0x2EC954u) {
        ctx->pc = 0x2EC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC950u;
        // 0x2ec954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC958u;
        goto label_2ec958;
    }
    ctx->pc = 0x2EC950u;
    {
        const bool branch_taken_0x2ec950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC950u;
        // 0x2ec954: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec950) {
            ctx->pc = 0x2EC9CCu;
            goto label_2ec9cc;
        }
    }
    ctx->pc = 0x2EC958u;
label_2ec958:
    // 0x2ec958: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_2ec95c:
    if (ctx->pc == 0x2EC95Cu) {
        ctx->pc = 0x2EC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC958u;
        // 0x2ec95c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC960u;
        goto label_2ec960;
    }
    ctx->pc = 0x2EC958u;
    {
        const bool branch_taken_0x2ec958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EC95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC958u;
        // 0x2ec95c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec958) {
            ctx->pc = 0x2EC998u;
            goto label_2ec998;
        }
    }
    ctx->pc = 0x2EC960u;
label_2ec960:
    // 0x2ec960: 0x50620011  beql        $v1, $v0, . + 4 + (0x11 << 2)
label_2ec964:
    if (ctx->pc == 0x2EC964u) {
        ctx->pc = 0x2EC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC960u;
        // 0x2ec964: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC968u;
        goto label_2ec968;
    }
    ctx->pc = 0x2EC960u;
    {
        const bool branch_taken_0x2ec960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ec960) {
            ctx->pc = 0x2EC964u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EC960u;
            // 0x2ec964: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EC9A8u;
            goto label_2ec9a8;
        }
    }
    ctx->pc = 0x2EC968u;
label_2ec968:
    // 0x2ec968: 0x10000017  b           . + 4 + (0x17 << 2)
label_2ec96c:
    if (ctx->pc == 0x2EC96Cu) {
        ctx->pc = 0x2EC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC968u;
        // 0x2ec96c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC970u;
        goto label_2ec970;
    }
    ctx->pc = 0x2EC968u;
    {
        const bool branch_taken_0x2ec968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC968u;
        // 0x2ec96c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec968) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC970u;
label_2ec970:
    // 0x2ec970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ec970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec974:
    // 0x2ec974: 0xc092472  jal         func_2491C8
label_2ec978:
    if (ctx->pc == 0x2EC978u) {
        ctx->pc = 0x2EC978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC974u;
        // 0x2ec978: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC97Cu;
        goto label_2ec97c;
    }
    ctx->pc = 0x2EC974u;
    SET_GPR_U32(ctx, 31, 0x2EC97Cu);
    ctx->pc = 0x2EC978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC974u;
    // 0x2ec978: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2491C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2491C8u, 0x2EC974u, 0x2EC97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC97Cu;
label_2ec97c:
    // 0x2ec97c: 0xc0bc0d2  jal         func_2F0348
label_2ec980:
    if (ctx->pc == 0x2EC980u) {
        ctx->pc = 0x2EC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC97Cu;
        // 0x2ec980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC984u;
        goto label_2ec984;
    }
    ctx->pc = 0x2EC97Cu;
    SET_GPR_U32(ctx, 31, 0x2EC984u);
    ctx->pc = 0x2EC980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC97Cu;
    // 0x2ec980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0348u, 0x2EC97Cu, 0x2EC984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC984u;
label_2ec984:
    // 0x2ec984: 0xc0bb1fe  jal         func_2EC7F8
label_2ec988:
    if (ctx->pc == 0x2EC988u) {
        ctx->pc = 0x2EC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC984u;
        // 0x2ec988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC98Cu;
        goto label_2ec98c;
    }
    ctx->pc = 0x2EC984u;
    SET_GPR_U32(ctx, 31, 0x2EC98Cu);
    ctx->pc = 0x2EC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC984u;
    // 0x2ec988: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC7F8u, 0x2EC984u, 0x2EC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC98Cu;
label_2ec98c:
    // 0x2ec98c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ec990:
    if (ctx->pc == 0x2EC990u) {
        ctx->pc = 0x2EC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC98Cu;
        // 0x2ec990: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC994u;
        goto label_2ec994;
    }
    ctx->pc = 0x2EC98Cu;
    {
        const bool branch_taken_0x2ec98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC98Cu;
        // 0x2ec990: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec98c) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC994u;
label_2ec994:
    // 0x2ec994: 0x0  nop
    ctx->pc = 0x2ec994u;
    // NOP
label_2ec998:
    // 0x2ec998: 0xc0bc0d2  jal         func_2F0348
label_2ec99c:
    if (ctx->pc == 0x2EC99Cu) {
        ctx->pc = 0x2EC9A0u;
        goto label_2ec9a0;
    }
    ctx->pc = 0x2EC998u;
    SET_GPR_U32(ctx, 31, 0x2EC9A0u);
    ctx->pc = 0x2F0348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0348u, 0x2EC998u, 0x2EC9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9A0u;
label_2ec9a0:
    // 0x2ec9a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ec9a4:
    if (ctx->pc == 0x2EC9A4u) {
        ctx->pc = 0x2EC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9A0u;
        // 0x2ec9a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9A8u;
        goto label_2ec9a8;
    }
    ctx->pc = 0x2EC9A0u;
    {
        const bool branch_taken_0x2ec9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EC9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9A0u;
        // 0x2ec9a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ec9a0) {
            ctx->pc = 0x2EC9C8u;
            goto label_2ec9c8;
        }
    }
    ctx->pc = 0x2EC9A8u;
label_2ec9a8:
    // 0x2ec9a8: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2ec9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2ec9ac:
    // 0x2ec9ac: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2ec9acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2ec9b0:
    // 0x2ec9b0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2ec9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ec9b4:
    // 0x2ec9b4: 0x60f809  jalr        $v1
label_2ec9b8:
    if (ctx->pc == 0x2EC9B8u) {
        ctx->pc = 0x2EC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9B4u;
        // 0x2ec9b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9BCu;
        goto label_2ec9bc;
    }
    ctx->pc = 0x2EC9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2EC9BCu);
        ctx->pc = 0x2EC9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9B4u;
        // 0x2ec9b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC9B4u, 0x2EC9BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EC9BCu;
label_2ec9bc:
    // 0x2ec9bc: 0xc0bb220  jal         func_2EC880
label_2ec9c0:
    if (ctx->pc == 0x2EC9C0u) {
        ctx->pc = 0x2EC9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9BCu;
        // 0x2ec9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9C4u;
        goto label_2ec9c4;
    }
    ctx->pc = 0x2EC9BCu;
    SET_GPR_U32(ctx, 31, 0x2EC9C4u);
    ctx->pc = 0x2EC9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EC9BCu;
    // 0x2ec9c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EC880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EC880u, 0x2EC9BCu, 0x2EC9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EC9C4u;
label_2ec9c4:
    // 0x2ec9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ec9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ec9c8:
    // 0x2ec9c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ec9c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ec9cc:
    // 0x2ec9cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ec9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2ec9d0:
    // 0x2ec9d0: 0x3e00008  jr          $ra
label_2ec9d4:
    if (ctx->pc == 0x2EC9D4u) {
        ctx->pc = 0x2EC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9D0u;
        // 0x2ec9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EC9D8u;
        goto label_fallthrough_0x2ec9d0;
    }
    ctx->pc = 0x2EC9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EC9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EC9D0u;
        // 0x2ec9d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EC9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ec9d0:
    ctx->pc = 0x2EC9D8u;
}
