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

// Function: sub_00501940
// Address: 0x501940 - 0x501b58
void sub_00501940_0x501940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00501940_0x501940");
#endif

    switch (ctx->pc) {
        case 0x501978u: goto label_501978;
        case 0x501988u: goto label_501988;
        case 0x501a1cu: goto label_501a1c;
        case 0x501a20u: goto label_501a20;
        case 0x501a54u: goto label_501a54;
        case 0x501a58u: goto label_501a58;
        case 0x501a8cu: goto label_501a8c;
        case 0x501a90u: goto label_501a90;
        case 0x501ac4u: goto label_501ac4;
        case 0x501ac8u: goto label_501ac8;
        case 0x501afcu: goto label_501afc;
        case 0x501b00u: goto label_501b00;
        case 0x501b34u: goto label_501b34;
        case 0x501b38u: goto label_501b38;
        default: break;
    }

    ctx->pc = 0x501940u;

    // 0x501940: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x501940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x501944: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x501944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x501948: 0x3c14008f  lui         $s4, 0x8F
    ctx->pc = 0x501948u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)143 << 16));
    // 0x50194c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x50194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x501950: 0x2690a680  addiu       $s0, $s4, -0x5980
    ctx->pc = 0x501950u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944384));
    // 0x501954: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x501954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x501958: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x501958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50195c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x50195cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x501960: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x501960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x501964: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x501964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x501968: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x501968u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x50196c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x50196cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x501970: 0xc1401f2  jal         func_5007C8
    ctx->pc = 0x501970u;
    SET_GPR_U32(ctx, 31, 0x501978u);
    ctx->pc = 0x501974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501970u;
    // 0x501974: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x5007C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x5007C8u, 0x501970u, 0x501978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501978u;
label_501978:
    // 0x501978: 0x260a0004  addiu       $t2, $s0, 0x4
    ctx->pc = 0x501978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x50197c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x50197cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x501980: 0x26090008  addiu       $t1, $s0, 0x8
    ctx->pc = 0x501980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x501984: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x501984u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_501988:
    // 0x501988: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x501988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x50198c: 0x423018  mult        $a2, $v0, $v0
    ctx->pc = 0x50198cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x501990: 0x70e73818  mult1       $a3, $a3, $a3
    ctx->pc = 0x501990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 7); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x501994: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x501994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x501998: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x501998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x50199c: 0x28c40000  slti        $a0, $a2, 0x0
    ctx->pc = 0x50199cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5019a0: 0x24c80fff  addiu       $t0, $a2, 0xFFF
    ctx->pc = 0x5019a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4095));
    // 0x5019a4: 0x28e20000  slti        $v0, $a3, 0x0
    ctx->pc = 0x5019a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5019a8: 0x24e50fff  addiu       $a1, $a3, 0xFFF
    ctx->pc = 0x5019a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4095));
    // 0x5019ac: 0x104300b  movn        $a2, $t0, $a0
    ctx->pc = 0x5019acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x5019b0: 0x24640fff  addiu       $a0, $v1, 0xFFF
    ctx->pc = 0x5019b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4095));
    // 0x5019b4: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x5019b4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x5019b8: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x5019b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x5019bc: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x5019bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x5019c0: 0x61303  sra         $v0, $a2, 12
    ctx->pc = 0x5019c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 12));
    // 0x5019c4: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x5019c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x5019c8: 0x73b03  sra         $a3, $a3, 12
    ctx->pc = 0x5019c8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 12));
    // 0x5019cc: 0x1e20ffee  bgtz        $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x5019CCu;
    {
        const bool branch_taken_0x5019cc = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x5019D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5019CCu;
        // 0x5019d0: 0xad230000  sw          $v1, 0x0($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5019cc) {
            ctx->pc = 0x501988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501988;
        }
    }
    ctx->pc = 0x5019D4u;
    // 0x5019d4: 0x2684a680  addiu       $a0, $s4, -0x5980
    ctx->pc = 0x5019d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294944384));
    // 0x5019d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x5019d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5019dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5019dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5019e0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x5019e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x5019e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x5019e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5019e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x5019e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5019ec: 0xad470000  sw          $a3, 0x0($t2)
    ctx->pc = 0x5019ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 7));
    // 0x5019f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x5019f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x5019f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x5019f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x5019f8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x5019f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x5019fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x5019fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x501a00: 0x81403f4  j           func_500FD0
    ctx->pc = 0x501A00u;
    ctx->pc = 0x501A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501A00u;
    // 0x501a04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x500FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x500FD0u, 0x501A00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x501A08u;
    // 0x501a08: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501a0c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501a14: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501A14u;
    SET_GPR_U32(ctx, 31, 0x501A1Cu);
    ctx->pc = 0x501A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501A14u;
    // 0x501a18: 0x2484c790  addiu       $a0, $a0, -0x3870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501A14u, 0x501A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501A1Cu;
label_501a1c:
    // 0x501a1c: 0x0  nop
    ctx->pc = 0x501a1cu;
    // NOP
label_501a20:
    // 0x501a20: 0x0  nop
    ctx->pc = 0x501a20u;
    // NOP
    // 0x501a24: 0x0  nop
    ctx->pc = 0x501a24u;
    // NOP
    // 0x501a28: 0x0  nop
    ctx->pc = 0x501a28u;
    // NOP
    // 0x501a2c: 0x0  nop
    ctx->pc = 0x501a2cu;
    // NOP
    // 0x501a30: 0x0  nop
    ctx->pc = 0x501a30u;
    // NOP
    // 0x501a34: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501A34u;
    {
        const bool branch_taken_0x501a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501a34) {
            ctx->pc = 0x501A20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501a20;
        }
    }
    ctx->pc = 0x501A3Cu;
    // 0x501a3c: 0x0  nop
    ctx->pc = 0x501a3cu;
    // NOP
    // 0x501a40: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501a40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501a44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501a44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501a48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501a4c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501A4Cu;
    SET_GPR_U32(ctx, 31, 0x501A54u);
    ctx->pc = 0x501A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501A4Cu;
    // 0x501a50: 0x2484c7a8  addiu       $a0, $a0, -0x3858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501A4Cu, 0x501A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501A54u;
label_501a54:
    // 0x501a54: 0x0  nop
    ctx->pc = 0x501a54u;
    // NOP
label_501a58:
    // 0x501a58: 0x0  nop
    ctx->pc = 0x501a58u;
    // NOP
    // 0x501a5c: 0x0  nop
    ctx->pc = 0x501a5cu;
    // NOP
    // 0x501a60: 0x0  nop
    ctx->pc = 0x501a60u;
    // NOP
    // 0x501a64: 0x0  nop
    ctx->pc = 0x501a64u;
    // NOP
    // 0x501a68: 0x0  nop
    ctx->pc = 0x501a68u;
    // NOP
    // 0x501a6c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501A6Cu;
    {
        const bool branch_taken_0x501a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501a6c) {
            ctx->pc = 0x501A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501a58;
        }
    }
    ctx->pc = 0x501A74u;
    // 0x501a74: 0x0  nop
    ctx->pc = 0x501a74u;
    // NOP
    // 0x501a78: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501a7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501a7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501a80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501a84: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501A84u;
    SET_GPR_U32(ctx, 31, 0x501A8Cu);
    ctx->pc = 0x501A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501A84u;
    // 0x501a88: 0x2484c7c8  addiu       $a0, $a0, -0x3838 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501A84u, 0x501A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501A8Cu;
label_501a8c:
    // 0x501a8c: 0x0  nop
    ctx->pc = 0x501a8cu;
    // NOP
label_501a90:
    // 0x501a90: 0x0  nop
    ctx->pc = 0x501a90u;
    // NOP
    // 0x501a94: 0x0  nop
    ctx->pc = 0x501a94u;
    // NOP
    // 0x501a98: 0x0  nop
    ctx->pc = 0x501a98u;
    // NOP
    // 0x501a9c: 0x0  nop
    ctx->pc = 0x501a9cu;
    // NOP
    // 0x501aa0: 0x0  nop
    ctx->pc = 0x501aa0u;
    // NOP
    // 0x501aa4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501AA4u;
    {
        const bool branch_taken_0x501aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501aa4) {
            ctx->pc = 0x501A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501a90;
        }
    }
    ctx->pc = 0x501AACu;
    // 0x501aac: 0x0  nop
    ctx->pc = 0x501aacu;
    // NOP
    // 0x501ab0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501ab4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501ab4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501abc: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501ABCu;
    SET_GPR_U32(ctx, 31, 0x501AC4u);
    ctx->pc = 0x501AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501ABCu;
    // 0x501ac0: 0x2484c7e0  addiu       $a0, $a0, -0x3820 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501ABCu, 0x501AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501AC4u;
label_501ac4:
    // 0x501ac4: 0x0  nop
    ctx->pc = 0x501ac4u;
    // NOP
label_501ac8:
    // 0x501ac8: 0x0  nop
    ctx->pc = 0x501ac8u;
    // NOP
    // 0x501acc: 0x0  nop
    ctx->pc = 0x501accu;
    // NOP
    // 0x501ad0: 0x0  nop
    ctx->pc = 0x501ad0u;
    // NOP
    // 0x501ad4: 0x0  nop
    ctx->pc = 0x501ad4u;
    // NOP
    // 0x501ad8: 0x0  nop
    ctx->pc = 0x501ad8u;
    // NOP
    // 0x501adc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501ADCu;
    {
        const bool branch_taken_0x501adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501adc) {
            ctx->pc = 0x501AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501ac8;
        }
    }
    ctx->pc = 0x501AE4u;
    // 0x501ae4: 0x0  nop
    ctx->pc = 0x501ae4u;
    // NOP
    // 0x501ae8: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501aec: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501aecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501af0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501af4: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501AF4u;
    SET_GPR_U32(ctx, 31, 0x501AFCu);
    ctx->pc = 0x501AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501AF4u;
    // 0x501af8: 0x2484c800  addiu       $a0, $a0, -0x3800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501AF4u, 0x501AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501AFCu;
label_501afc:
    // 0x501afc: 0x0  nop
    ctx->pc = 0x501afcu;
    // NOP
label_501b00:
    // 0x501b00: 0x0  nop
    ctx->pc = 0x501b00u;
    // NOP
    // 0x501b04: 0x0  nop
    ctx->pc = 0x501b04u;
    // NOP
    // 0x501b08: 0x0  nop
    ctx->pc = 0x501b08u;
    // NOP
    // 0x501b0c: 0x0  nop
    ctx->pc = 0x501b0cu;
    // NOP
    // 0x501b10: 0x0  nop
    ctx->pc = 0x501b10u;
    // NOP
    // 0x501b14: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501B14u;
    {
        const bool branch_taken_0x501b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501b14) {
            ctx->pc = 0x501B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501b00;
        }
    }
    ctx->pc = 0x501B1Cu;
    // 0x501b1c: 0x0  nop
    ctx->pc = 0x501b1cu;
    // NOP
    // 0x501b20: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x501b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x501b24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x501b24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x501b28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x501b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x501b2c: 0xc04a1ce  jal         func_128738
    ctx->pc = 0x501B2Cu;
    SET_GPR_U32(ctx, 31, 0x501B34u);
    ctx->pc = 0x501B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x501B2Cu;
    // 0x501b30: 0x2484c820  addiu       $a0, $a0, -0x37E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128738u, 0x501B2Cu, 0x501B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x501B34u;
label_501b34:
    // 0x501b34: 0x0  nop
    ctx->pc = 0x501b34u;
    // NOP
label_501b38:
    // 0x501b38: 0x0  nop
    ctx->pc = 0x501b38u;
    // NOP
    // 0x501b3c: 0x0  nop
    ctx->pc = 0x501b3cu;
    // NOP
    // 0x501b40: 0x0  nop
    ctx->pc = 0x501b40u;
    // NOP
    // 0x501b44: 0x0  nop
    ctx->pc = 0x501b44u;
    // NOP
    // 0x501b48: 0x0  nop
    ctx->pc = 0x501b48u;
    // NOP
    // 0x501b4c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x501B4Cu;
    {
        const bool branch_taken_0x501b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x501b4c) {
            ctx->pc = 0x501B38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_501b38;
        }
    }
    ctx->pc = 0x501B54u;
    // 0x501b54: 0x0  nop
    ctx->pc = 0x501b54u;
    // NOP
    ctx->pc = 0x501b58u;
}
