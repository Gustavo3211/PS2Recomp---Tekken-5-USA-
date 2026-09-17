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

// Function: sub_00292C20
// Address: 0x292c20 - 0x292d88
void sub_00292C20_0x292c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292C20_0x292c20");
#endif

    switch (ctx->pc) {
        case 0x292c90u: goto label_292c90;
        case 0x292cacu: goto label_292cac;
        case 0x292ce0u: goto label_292ce0;
        case 0x292d04u: goto label_292d04;
        case 0x292d34u: goto label_292d34;
        default: break;
    }

    ctx->pc = 0x292c20u;

    // 0x292c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x292c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x292c24: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x292c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x292c28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x292c28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x292c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292c30: 0x26840164  addiu       $a0, $s4, 0x164
    ctx->pc = 0x292c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 356));
    // 0x292c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x292c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x292c38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x292c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x292c3c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x292c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x292c40: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x292c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x292c44: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x292c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x292c48: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x292c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x292c4c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x292c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x292c50: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x292c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x292c54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x292c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292C58u;
    {
        const bool branch_taken_0x292c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C58u;
        // 0x292c5c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c58) {
            ctx->pc = 0x292C70u;
            goto label_292c70;
        }
    }
    ctx->pc = 0x292C60u;
    // 0x292c60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x292c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x292c64: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x292c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x292c68: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292C68u;
    {
        const bool branch_taken_0x292c68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x292C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292C68u;
        // 0x292c6c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c68) {
            ctx->pc = 0x292C80u;
            goto label_292c80;
        }
    }
    ctx->pc = 0x292C70u;
label_292c70:
    // 0x292c70: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x292c70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x292c74: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x292c74u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c78: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x292c78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x292c7c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x292c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_292c80:
    // 0x292c80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292c80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c84: 0x2456b648  addiu       $s6, $v0, -0x49B8
    ctx->pc = 0x292c84u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948424));
    // 0x292c88: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x292c88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x292c8c: 0x2413efff  addiu       $s3, $zero, -0x1001
    ctx->pc = 0x292c8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_292c90:
    // 0x292c90: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x292c90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x292c94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x292c94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x292c98: 0x2161021  addu        $v0, $s0, $s6
    ctx->pc = 0x292c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x292c9c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x292c9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x292ca0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x292ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292ca4: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x292CA4u;
    SET_GPR_U32(ctx, 31, 0x292CACu);
    ctx->pc = 0x292CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CA4u;
    // 0x292ca8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x292CA4u, 0x292CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292CACu;
label_292cac:
    // 0x292cac: 0x2a450022  slti        $a1, $s2, 0x22
    ctx->pc = 0x292cacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x292cb0: 0x8c440078  lw          $a0, 0x78($v0)
    ctx->pc = 0x292cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x292cb4: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x292cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
    // 0x292cb8: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x292cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x292cbc: 0x731824  and         $v1, $v1, $s3
    ctx->pc = 0x292cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 19));
    // 0x292cc0: 0x14a0fff3  bnez        $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x292CC0u;
    {
        const bool branch_taken_0x292cc0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x292CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292CC0u;
        // 0x292cc4: 0xac430080  sw          $v1, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cc0) {
            ctx->pc = 0x292C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292c90;
        }
    }
    ctx->pc = 0x292CC8u;
    // 0x292cc8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x292cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x292ccc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x292cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cd0: 0x2457b6d0  addiu       $s7, $v0, -0x4930
    ctx->pc = 0x292cd0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
    // 0x292cd4: 0x2416efff  addiu       $s6, $zero, -0x1001
    ctx->pc = 0x292cd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x292cd8: 0x26fe0004  addiu       $fp, $s7, 0x4
    ctx->pc = 0x292cd8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x292cdc: 0x0  nop
    ctx->pc = 0x292cdcu;
    // NOP
label_292ce0:
    // 0x292ce0: 0x1288c0  sll         $s1, $s2, 3
    ctx->pc = 0x292ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x292ce4: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x292ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x292ce8: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x292ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x292cec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cf0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x292cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x292cf4: 0x26020100  addiu       $v0, $s0, 0x100
    ctx->pc = 0x292cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
    // 0x292cf8: 0x2a29821  addu        $s3, $s5, $v0
    ctx->pc = 0x292cf8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x292cfc: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x292CFCu;
    SET_GPR_U32(ctx, 31, 0x292D04u);
    ctx->pc = 0x292D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292CFCu;
    // 0x292d00: 0x26100120  addiu       $s0, $s0, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x292CFCu, 0x292D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D04u;
label_292d04:
    // 0x292d04: 0x23e2821  addu        $a1, $s1, $fp
    ctx->pc = 0x292d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
    // 0x292d08: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x292d08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x292d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x292d10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x292d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d14: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x292D14u;
    {
        const bool branch_taken_0x292d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D14u;
        // 0x292d18: 0x2b08021  addu        $s0, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d14) {
            ctx->pc = 0x292D28u;
            goto label_292d28;
        }
    }
    ctx->pc = 0x292D1Cu;
    // 0x292d1c: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x292d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x292d20: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x292d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x292d24: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x292d24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_292d28:
    // 0x292d28: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x292d28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x292d2c: 0xc0a5b64  jal         func_296D90
    ctx->pc = 0x292D2Cu;
    SET_GPR_U32(ctx, 31, 0x292D34u);
    ctx->pc = 0x292D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D2Cu;
    // 0x292d30: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296D90u, 0x292D2Cu, 0x292D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292D34u;
label_292d34:
    // 0x292d34: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x292d34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d38: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x292D38u;
    {
        const bool branch_taken_0x292d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D38u;
        // 0x292d3c: 0x2a440008  slti        $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d38) {
            ctx->pc = 0x292D4Cu;
            goto label_292d4c;
        }
    }
    ctx->pc = 0x292D40u;
    // 0x292d40: 0x8c620080  lw          $v0, 0x80($v1)
    ctx->pc = 0x292d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 128)));
    // 0x292d44: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x292d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
    // 0x292d48: 0xac620080  sw          $v0, 0x80($v1)
    ctx->pc = 0x292d48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 2));
label_292d4c:
    // 0x292d4c: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x292D4Cu;
    {
        const bool branch_taken_0x292d4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x292D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D4Cu;
        // 0x292d50: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d4c) {
            ctx->pc = 0x292CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_292ce0;
        }
    }
    ctx->pc = 0x292D54u;
    // 0x292d54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x292d54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292d58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x292d58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x292d5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x292d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292d60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x292d60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x292d64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x292d64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292d68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x292d68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x292d6c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x292d6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292d70: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x292d70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x292d74: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x292d74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292d78: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x292d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x292d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x292D7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D7Cu;
        // 0x292d80: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292D7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292D84u;
    // 0x292d84: 0x0  nop
    ctx->pc = 0x292d84u;
    // NOP
    ctx->pc = 0x292d88u;
}
