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

// Function: sub_004A4968
// Address: 0x4a4968 - 0x4a4ac8
void sub_004A4968_0x4a4968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4968_0x4a4968");
#endif

    switch (ctx->pc) {
        case 0x4a49e0u: goto label_4a49e0;
        default: break;
    }

    ctx->pc = 0x4a4968u;

    // 0x4a4968: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x4a4968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4a496c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a496cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4a4970: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x4a4970u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4a4974: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x4a4974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x4a4978: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x4a4978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x4a497c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a497cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4980: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x4a4980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x4a4984: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a4984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4988: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x4a4988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x4a498c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a498cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a4990: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A4990u;
    {
        const bool branch_taken_0x4a4990 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4990u;
        // 0x4a4994: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4990) {
            ctx->pc = 0x4A49B0u;
            goto label_4a49b0;
        }
    }
    ctx->pc = 0x4A4998u;
    // 0x4a4998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a4998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a499c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4A499Cu;
    {
        const bool branch_taken_0x4a499c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A49A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A499Cu;
        // 0x4a49a0: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a499c) {
            ctx->pc = 0x4A49C8u;
            goto label_4a49c8;
        }
    }
    ctx->pc = 0x4A49A4u;
    // 0x4a49a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x4A49A4u;
    {
        const bool branch_taken_0x4a49a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a49a4) {
            ctx->pc = 0x4A49D8u;
            goto label_4a49d8;
        }
    }
    ctx->pc = 0x4A49ACu;
    // 0x4a49ac: 0x0  nop
    ctx->pc = 0x4a49acu;
    // NOP
label_4a49b0:
    // 0x4a49b0: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x4a49b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x4a49b4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x4a49b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x4a49b8: 0x24518a40  addiu       $s1, $v0, -0x75C0
    ctx->pc = 0x4a49b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937152));
    // 0x4a49bc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x4a49bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4a49c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x4A49C0u;
    {
        const bool branch_taken_0x4a49c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A49C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A49C0u;
        // 0x4a49c4: 0x24729990  addiu       $s2, $v1, -0x6670 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a49c0) {
            ctx->pc = 0x4A49D8u;
            goto label_4a49d8;
        }
    }
    ctx->pc = 0x4A49C8u;
label_4a49c8:
    // 0x4a49c8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x4a49c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x4a49cc: 0x24518a80  addiu       $s1, $v0, -0x7580
    ctx->pc = 0x4a49ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937216));
    // 0x4a49d0: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x4a49d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x4a49d4: 0x24728e30  addiu       $s2, $v1, -0x71D0
    ctx->pc = 0x4a49d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938160));
label_4a49d8:
    // 0x4a49d8: 0xc123332  jal         func_48CCC8
    ctx->pc = 0x4A49D8u;
    SET_GPR_U32(ctx, 31, 0x4A49E0u);
    ctx->pc = 0x48CCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CCC8u, 0x4A49D8u, 0x4A49E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A49E0u;
label_4a49e0:
    // 0x4a49e0: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x4A49E0u;
    {
        const bool branch_taken_0x4a49e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A49E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A49E0u;
        // 0x4a49e4: 0x3c08ffff  lui         $t0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a49e0) {
            ctx->pc = 0x4A4AACu;
            goto label_4a4aac;
        }
    }
    ctx->pc = 0x4A49E8u;
    // 0x4a49e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a49e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a49ec: 0x240200d5  addiu       $v0, $zero, 0xD5
    ctx->pc = 0x4a49ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
    // 0x4a49f0: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x4a49f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x4a49f4: 0x102c00  sll         $a1, $s0, 16
    ctx->pc = 0x4a49f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x4a49f8: 0xa4620008  sh          $v0, 0x8($v1)
    ctx->pc = 0x4a49f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a49fc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4a49fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4a4a00: 0x2283024  and         $a2, $s1, $t0
    ctx->pc = 0x4a4a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & GPR_U64(ctx, 8));
    // 0x4a4a04: 0x113c00  sll         $a3, $s1, 16
    ctx->pc = 0x4a4a04u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x4a4a08: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a4a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a0c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4a4a0cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4a4a10: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x4a4a10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x4a4a14: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x4a4a14u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x4a4a18: 0xa464000c  sh          $a0, 0xC($v1)
    ctx->pc = 0x4a4a18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 4));
    // 0x4a4a1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a20: 0xa452000e  sh          $s2, 0xE($v0)
    ctx->pc = 0x4a4a20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 18));
    // 0x4a4a24: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a4a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a28: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a4a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a4a2c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a4a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4a30: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a4a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a4a34: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x4a4a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x4a4a38: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a4a38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a4a3c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a4a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a40: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x4a4a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x4a4a44: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4a4a44u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4a48: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a4a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a4a4c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a4a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a50: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x4a4a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x4a4a54: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a4a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4a58: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4a5c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x4a4a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x4a4a60: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a4a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a4a64: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a4a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a68: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4a4a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a4a6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a4a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4a70: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x4a4a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x4a4a74: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x4a4a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x4a4a78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a4a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x4a4a7c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x4a4a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a80: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x4a4a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x4a4a84: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x4a4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a4a88: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4a8c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4a4a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a4a90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a4a90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a4a94: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x4a4a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a4a98: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x4a4a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x4a4a9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4a4a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4a4aa0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4a4aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4a4aa4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x4a4aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x4a4aa8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4a4aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4a4aac:
    // 0x4a4aac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x4a4aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a4ab0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x4a4ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a4ab4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x4a4ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a4ab8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x4a4ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a4abc: 0x3e00008  jr          $ra
    ctx->pc = 0x4A4ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A4ABCu;
        // 0x4a4ac0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A4ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A4AC4u;
    // 0x4a4ac4: 0x0  nop
    ctx->pc = 0x4a4ac4u;
    // NOP
    ctx->pc = 0x4a4ac8u;
}
