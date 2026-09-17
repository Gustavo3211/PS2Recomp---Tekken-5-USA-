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

// Function: sub_0021CA60
// Address: 0x21ca60 - 0x21cbb8
void sub_0021CA60_0x21ca60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA60_0x21ca60");
#endif

    switch (ctx->pc) {
        case 0x21ca90u: goto label_21ca90;
        case 0x21caacu: goto label_21caac;
        case 0x21cabcu: goto label_21cabc;
        case 0x21cae0u: goto label_21cae0;
        case 0x21cb1cu: goto label_21cb1c;
        default: break;
    }

    ctx->pc = 0x21ca60u;

    // 0x21ca60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ca60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ca64: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x21ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x21ca68: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21ca68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ca70: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x21ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x21ca74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ca78: 0x267100fd  addiu       $s1, $s3, 0xFD
    ctx->pc = 0x21ca78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 253));
    // 0x21ca7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21ca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21ca80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x21ca80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ca84: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x21ca84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x21ca88: 0x26740005  addiu       $s4, $s3, 0x5
    ctx->pc = 0x21ca88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x21ca8c: 0x0  nop
    ctx->pc = 0x21ca8cu;
    // NOP
label_21ca90:
    // 0x21ca90: 0x92300009  lbu         $s0, 0x9($s1)
    ctx->pc = 0x21ca90u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x21ca94: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x21ca94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x21ca98: 0x5202000b  beql        $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21CA98u;
    {
        const bool branch_taken_0x21ca98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x21ca98) {
            ctx->pc = 0x21CA9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CA98u;
            // 0x21ca9c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CAC8u;
            goto label_21cac8;
        }
    }
    ctx->pc = 0x21CAA0u;
    // 0x21caa0: 0xa2300008  sb          $s0, 0x8($s1)
    ctx->pc = 0x21caa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 16));
    // 0x21caa4: 0xc07c2dc  jal         func_1F0B70
    ctx->pc = 0x21CAA4u;
    SET_GPR_U32(ctx, 31, 0x21CAACu);
    ctx->pc = 0x21CAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAA4u;
    // 0x21caa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0B70u, 0x21CAA4u, 0x21CAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAACu;
label_21caac:
    // 0x21caac: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x21caacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x21cab0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x21cab0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21cab4: 0xc08664a  jal         func_219928
    ctx->pc = 0x21CAB4u;
    SET_GPR_U32(ctx, 31, 0x21CABCu);
    ctx->pc = 0x21CAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAB4u;
    // 0x21cab8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219928u, 0x21CAB4u, 0x21CABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CABCu;
label_21cabc:
    // 0x21cabc: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x21cabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x21cac0: 0xa0400010  sb          $zero, 0x10($v0)
    ctx->pc = 0x21cac0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x21cac4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x21cac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_21cac8:
    // 0x21cac8: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x21cac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x21cacc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x21CACCu;
    {
        const bool branch_taken_0x21cacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CACCu;
        // 0x21cad0: 0x2631000d  addiu       $s1, $s1, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cacc) {
            ctx->pc = 0x21CA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21ca90;
        }
    }
    ctx->pc = 0x21CAD4u;
    // 0x21cad4: 0x926500fc  lbu         $a1, 0xFC($s3)
    ctx->pc = 0x21cad4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 252)));
    // 0x21cad8: 0xc086b4c  jal         func_21AD30
    ctx->pc = 0x21CAD8u;
    SET_GPR_U32(ctx, 31, 0x21CAE0u);
    ctx->pc = 0x21CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CAD8u;
    // 0x21cadc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21AD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21AD30u, 0x21CAD8u, 0x21CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CAE0u;
label_21cae0:
    // 0x21cae0: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x21cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x21cae4: 0x24728858  addiu       $s2, $v1, -0x77A8
    ctx->pc = 0x21cae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936664));
    // 0x21cae8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x21cae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21caec: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x21caecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3A8880u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3A8880u, _value); } while (0);
    // 0x21caf0: 0x9262002b  lbu         $v0, 0x2B($s3)
    ctx->pc = 0x21caf0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 43)));
    // 0x21caf4: 0x14440024  bne         $v0, $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x21CAF4u;
    {
        const bool branch_taken_0x21caf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAF4u;
        // 0x21caf8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21caf4) {
            ctx->pc = 0x21CB88u;
            goto label_21cb88;
        }
    }
    ctx->pc = 0x21CAFCu;
    // 0x21cafc: 0x9262002e  lbu         $v0, 0x2E($s3)
    ctx->pc = 0x21cafcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 46)));
    // 0x21cb00: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x21cb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x21cb04: 0x28040  sll         $s0, $v0, 1
    ctx->pc = 0x21cb04u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x21cb08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x21cb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x21cb0c: 0x24710002  addiu       $s1, $v1, 0x2
    ctx->pc = 0x21cb0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x21cb10: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x21cb10u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x21cb14: 0xc04a1f0  jal         func_1287C0
    ctx->pc = 0x21CB14u;
    SET_GPR_U32(ctx, 31, 0x21CB1Cu);
    ctx->pc = 0x21CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CB14u;
    // 0x21cb18: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1287C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1287C0u, 0x21CB14u, 0x21CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CB1Cu;
label_21cb1c:
    // 0x21cb1c: 0x8e430064  lw          $v1, 0x64($s2)
    ctx->pc = 0x21cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x21cb20: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x21cb20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x21cb24: 0x261000fd  addiu       $s0, $s0, 0xFD
    ctx->pc = 0x21cb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 253));
    // 0x21cb28: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x21cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21cb2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21cb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21cb30: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x21cb34: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x21cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x21cb38: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x21cb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x21cb3c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x21cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x21cb40: 0xae440064  sw          $a0, 0x64($s2)
    ctx->pc = 0x21cb40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 4));
    // 0x21cb44: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x21cb44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x21cb48: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x21cb48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x21cb4c: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x21cb4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x21cb50: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x21cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x21cb54: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21CB54u;
    {
        const bool branch_taken_0x21cb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x21CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB54u;
        // 0x21cb58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb54) {
            ctx->pc = 0x21CB68u;
            goto label_21cb68;
        }
    }
    ctx->pc = 0x21CB5Cu;
    // 0x21cb5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21CB5Cu;
    {
        const bool branch_taken_0x21cb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB5Cu;
        // 0x21cb60: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb5c) {
            ctx->pc = 0x21CB74u;
            goto label_21cb74;
        }
    }
    ctx->pc = 0x21CB64u;
    // 0x21cb64: 0x0  nop
    ctx->pc = 0x21cb64u;
    // NOP
label_21cb68:
    // 0x21cb68: 0x26230003  addiu       $v1, $s1, 0x3
    ctx->pc = 0x21cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
    // 0x21cb6c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x21cb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x21cb70: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x21cb70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_21cb74:
    // 0x21cb74: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x21cb74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x21cb78: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x21CB78u;
    {
        const bool branch_taken_0x21cb78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21cb78) {
            ctx->pc = 0x21CB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21CB78u;
            // 0x21cb7c: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21CB88u;
            goto label_21cb88;
        }
    }
    ctx->pc = 0x21CB80u;
    // 0x21cb80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21CB80u;
    {
        const bool branch_taken_0x21cb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CB80u;
        // 0x21cb84: 0xae7100d8  sw          $s1, 0xD8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cb80) {
            ctx->pc = 0x21CB8Cu;
            goto label_21cb8c;
        }
    }
    ctx->pc = 0x21CB88u;
label_21cb88:
    // 0x21cb88: 0xae7100d8  sw          $s1, 0xD8($s3)
    ctx->pc = 0x21cb88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 216), GPR_U32(ctx, 17));
label_21cb8c:
    // 0x21cb8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cb8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cb90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21cb90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21cb94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21cb94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cb98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x21cb98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cb9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x21cb9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cba0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x21cba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21cba4: 0x3e00008  jr          $ra
    ctx->pc = 0x21CBA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CBA4u;
        // 0x21cba8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CBA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CBACu;
    // 0x21cbac: 0x0  nop
    ctx->pc = 0x21cbacu;
    // NOP
    // 0x21cbb0: 0x3e00008  jr          $ra
    ctx->pc = 0x21CBB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CBB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CBB8u;
}
