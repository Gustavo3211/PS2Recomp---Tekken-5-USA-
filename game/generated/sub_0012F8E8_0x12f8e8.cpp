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

// Function: sub_0012F8E8
// Address: 0x12f8e8 - 0x12fa70
void sub_0012F8E8_0x12f8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F8E8_0x12f8e8");
#endif

    switch (ctx->pc) {
        case 0x12f91cu: goto label_12f91c;
        case 0x12f984u: goto label_12f984;
        case 0x12f9ecu: goto label_12f9ec;
        case 0x12fa38u: goto label_12fa38;
        default: break;
    }

    ctx->pc = 0x12f8e8u;

    // 0x12f8e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12f8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12f8ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12f8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12f8f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12f8f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f8f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f8f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12f8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12f8fc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12f8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12f900: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12f900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12f904: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12f904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12f908: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12f908u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f90c: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12f90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12f910: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x12f910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x12f914: 0xc04bae6  jal         func_12EB98
    ctx->pc = 0x12F914u;
    SET_GPR_U32(ctx, 31, 0x12F91Cu);
    ctx->pc = 0x12F918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F914u;
    // 0x12f918: 0xe0a82d  daddu       $s5, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EB98u, 0x12F914u, 0x12F91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F91Cu;
label_12f91c:
    // 0x12f91c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x12f91cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f920: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x12f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x12f924: 0x10203f  dsra32      $a0, $s0, 0
    ctx->pc = 0x12f924u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x12f928: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x12f928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x12f92c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12f930: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12f930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12f934: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x12f934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x12f938: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x12f938u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x12f93c: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x12f93cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x12f940: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f944: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12f944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x12f948: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x12f948u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x12f94c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x12f94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x12f950: 0x10953e  dsrl32      $s2, $s0, 20
    ctx->pc = 0x12f950u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 16) >> (32 + 20));
    // 0x12f954: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x12f954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x12f958: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F958u;
    {
        const bool branch_taken_0x12f958 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F958u;
        // 0x12f95c: 0x26710014  addiu       $s1, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f958) {
            ctx->pc = 0x12F96Cu;
            goto label_12f96c;
        }
    }
    ctx->pc = 0x12F960u;
    // 0x12f960: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x12f964: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x12f964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x12f968: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x12f968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_12f96c:
    // 0x12f96c: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x12f96cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x12f970: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x12f970u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x12f974: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x12F974u;
    {
        const bool branch_taken_0x12f974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F974u;
        // 0x12f978: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f974) {
            ctx->pc = 0x12F9E0u;
            goto label_12f9e0;
        }
    }
    ctx->pc = 0x12F97Cu;
    // 0x12f97c: 0xc04bbca  jal         func_12EF28
    ctx->pc = 0x12F97Cu;
    SET_GPR_U32(ctx, 31, 0x12F984u);
    ctx->pc = 0x12F980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F97Cu;
    // 0x12f980: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF28u, 0x12F97Cu, 0x12F984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F984u;
label_12f984:
    // 0x12f984: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12f984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f988: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x12F988u;
    {
        const bool branch_taken_0x12f988 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F988u;
        // 0x12f98c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f988) {
            ctx->pc = 0x12F9B8u;
            goto label_12f9b8;
        }
    }
    ctx->pc = 0x12F990u;
    // 0x12f990: 0x52023  negu        $a0, $a1
    ctx->pc = 0x12f990u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x12f994: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12f994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f998: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x12f998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x12f99c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12f99cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12f9a0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12f9a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12f9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f9a8: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x12f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x12f9ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F9ACu;
    {
        const bool branch_taken_0x12f9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9ACu;
        // 0x12f9b0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9ac) {
            ctx->pc = 0x12F9C0u;
            goto label_12f9c0;
        }
    }
    ctx->pc = 0x12F9B4u;
    // 0x12f9b4: 0x0  nop
    ctx->pc = 0x12f9b4u;
    // NOP
label_12f9b8:
    // 0x12f9b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x12f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f9bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_12f9c0:
    // 0x12f9c0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x12f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f9c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f9c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12f9cc: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x12f9ccu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x12f9d0: 0xae240004  sw          $a0, 0x4($s1)
    ctx->pc = 0x12f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 4));
    // 0x12f9d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12F9D8u;
    {
        const bool branch_taken_0x12f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9D8u;
        // 0x12f9dc: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9d8) {
            ctx->pc = 0x12FA00u;
            goto label_12fa00;
        }
    }
    ctx->pc = 0x12F9E0u;
label_12f9e0:
    // 0x12f9e0: 0x27a40004  addiu       $a0, $sp, 0x4
    ctx->pc = 0x12f9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x12f9e4: 0xc04bbca  jal         func_12EF28
    ctx->pc = 0x12F9E4u;
    SET_GPR_U32(ctx, 31, 0x12F9ECu);
    ctx->pc = 0x12F9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9E4u;
    // 0x12f9e8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EF28u, 0x12F9E4u, 0x12F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9ECu;
label_12f9ec:
    // 0x12f9ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x12f9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f9f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x12f9f4: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x12f9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12f9f8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x12f9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x12f9fc: 0xae640010  sw          $a0, 0x10($s3)
    ctx->pc = 0x12f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 4));
label_12fa00:
    // 0x12fa00: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FA00u;
    {
        const bool branch_taken_0x12fa00 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA00u;
        // 0x12fa04: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa00) {
            ctx->pc = 0x12FA20u;
            goto label_12fa20;
        }
    }
    ctx->pc = 0x12FA08u;
    // 0x12fa08: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x12fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x12fa0c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x12fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12fa10: 0x2442fbcd  addiu       $v0, $v0, -0x433
    ctx->pc = 0x12fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966221));
    // 0x12fa14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12FA14u;
    {
        const bool branch_taken_0x12fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA14u;
        // 0x12fa18: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa14) {
            ctx->pc = 0x12FA40u;
            goto label_12fa40;
        }
    }
    ctx->pc = 0x12FA1Cu;
    // 0x12fa1c: 0x0  nop
    ctx->pc = 0x12fa1cu;
    // NOP
label_12fa20:
    // 0x12fa20: 0x24a3fbce  addiu       $v1, $a1, -0x432
    ctx->pc = 0x12fa20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966222));
    // 0x12fa24: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x12fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12fa28: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x12fa28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
    // 0x12fa2c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x12fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x12fa30: 0xc04bbaa  jal         func_12EEA8
    ctx->pc = 0x12FA30u;
    SET_GPR_U32(ctx, 31, 0x12FA38u);
    ctx->pc = 0x12FA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA30u;
    // 0x12fa34: 0x8c44fffc  lw          $a0, -0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EEA8u, 0x12FA30u, 0x12FA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA38u;
label_12fa38:
    // 0x12fa38: 0x101940  sll         $v1, $s0, 5
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x12fa3c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x12fa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_12fa40:
    // 0x12fa40: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x12fa40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x12fa44: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x12fa44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12fa48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12fa4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12fa4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12fa50: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12fa50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12fa54: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12fa54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12fa58: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12fa58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12fa5c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12fa5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12fa60: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x12fa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12fa64: 0x3e00008  jr          $ra
    ctx->pc = 0x12FA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA64u;
        // 0x12fa68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FA6Cu;
    // 0x12fa6c: 0x0  nop
    ctx->pc = 0x12fa6cu;
    // NOP
    ctx->pc = 0x12fa70u;
}
