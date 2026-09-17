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

// Function: sub_00331BC0
// Address: 0x331bc0 - 0x331f10
void sub_00331BC0_0x331bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00331BC0_0x331bc0");
#endif

    switch (ctx->pc) {
        case 0x331c10u: goto label_331c10;
        case 0x331c5cu: goto label_331c5c;
        case 0x331d44u: goto label_331d44;
        case 0x331d78u: goto label_331d78;
        default: break;
    }

    ctx->pc = 0x331bc0u;

    // 0x331bc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x331bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x331bc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x331bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x331bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x331bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331bcc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x331bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x331bd0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x331bd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331bd4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x331bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x331bd8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x331bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x331bdc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x331bdcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331be0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x331be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x331be4: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x331be4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
    // 0x331be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x331be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x331bec: 0x26e20400  addiu       $v0, $s7, 0x400
    ctx->pc = 0x331becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
    // 0x331bf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x331bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x331bf4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x331bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x331bf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x331bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x331bfc: 0x8c560014  lw          $s6, 0x14($v0)
    ctx->pc = 0x331bfcu;
    SET_GPR_S32(ctx, 22, (int32_t)FAST_READ32(0x400414u));
    // 0x331c00: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x331c00u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331c04: 0x10c00064  beqz        $a2, . + 4 + (0x64 << 2)
    ctx->pc = 0x331C04u;
    {
        const bool branch_taken_0x331c04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x331C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C04u;
        // 0x331c08: 0x26d40010  addiu       $s4, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331c04) {
            ctx->pc = 0x331D98u;
            goto label_331d98;
        }
    }
    ctx->pc = 0x331C0Cu;
    // 0x331c0c: 0x0  nop
    ctx->pc = 0x331c0cu;
    // NOP
label_331c10:
    // 0x331c10: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x331c10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331c14: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x331c14u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331c18: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x331c18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x331c1c: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x331c1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x331c20: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x331c20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x331c24: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x331c24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x331c28: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x331c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x331c2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x331c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x331c30: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x331c30u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x331c34: 0x59100  sll         $s2, $a1, 4
    ctx->pc = 0x331c34u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x331c38: 0x16a00009  bnez        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x331C38u;
    {
        const bool branch_taken_0x331c38 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x331C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C38u;
        // 0x331c3c: 0x48900  sll         $s1, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331c38) {
            ctx->pc = 0x331C60u;
            goto label_331c60;
        }
    }
    ctx->pc = 0x331C40u;
    // 0x331c40: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x331c40u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c44: 0x26940050  addiu       $s4, $s4, 0x50
    ctx->pc = 0x331c44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 80));
    // 0x331c48: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x331c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c50: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x331c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331c54: 0xc0cc884  jal         func_332210
    ctx->pc = 0x331C54u;
    SET_GPR_U32(ctx, 31, 0x331C5Cu);
    ctx->pc = 0x331C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331C54u;
    // 0x331c58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332210u, 0x331C54u, 0x331C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331C5Cu;
label_331c5c:
    // 0x331c5c: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x331c5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_331c60:
    // 0x331c60: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x331c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x331c64: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x331c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x331c68: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x331C68u;
    {
        const bool branch_taken_0x331c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x331C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331C68u;
        // 0x331c6c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331c68) {
            ctx->pc = 0x331CD8u;
            goto label_331cd8;
        }
    }
    ctx->pc = 0x331C70u;
    // 0x331c70: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x331c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331c74: 0x2951823  subu        $v1, $s4, $s5
    ctx->pc = 0x331c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x331c78: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x331c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x331c7c: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x331c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x331c80: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x331c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331c84: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x331c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x331c88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x331c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x331c8c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x331c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x331c90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331c94: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x331c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331c98: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x331c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
    // 0x331c9c: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x331c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
    // 0x331ca0: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x331ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x331ca4: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x331ca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x331ca8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x331ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x331cac: 0xa6a30040  sh          $v1, 0x40($s5)
    ctx->pc = 0x331cacu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x331cb0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x331cb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x331cb4: 0xfea40028  sd          $a0, 0x28($s5)
    ctx->pc = 0x331cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 4));
    // 0x331cb8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x331cb8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331cbc: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x331cbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x331cc0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x331cc0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x331cc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331cc8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x331cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x331ccc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x331CCCu;
    {
        const bool branch_taken_0x331ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CCCu;
        // 0x331cd0: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ccc) {
            ctx->pc = 0x331D88u;
            goto label_331d88;
        }
    }
    ctx->pc = 0x331CD4u;
    // 0x331cd4: 0x0  nop
    ctx->pc = 0x331cd4u;
    // NOP
label_331cd8:
    // 0x331cd8: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x331CD8u;
    {
        const bool branch_taken_0x331cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x331CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CD8u;
        // 0x331cdc: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331cd8) {
            ctx->pc = 0x331D88u;
            goto label_331d88;
        }
    }
    ctx->pc = 0x331CE0u;
    // 0x331ce0: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x331CE0u;
    {
        const bool branch_taken_0x331ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x331CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CE0u;
        // 0x331ce4: 0x2c620020  sltiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ce0) {
            ctx->pc = 0x331D7Cu;
            goto label_331d7c;
        }
    }
    ctx->pc = 0x331CE8u;
    // 0x331ce8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x331CE8u;
    {
        const bool branch_taken_0x331ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331CE8u;
        // 0x331cec: 0x30c20080  andi        $v0, $a2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ce8) {
            ctx->pc = 0x331D10u;
            goto label_331d10;
        }
    }
    ctx->pc = 0x331CF0u;
    // 0x331cf0: 0x96090008  lhu         $t1, 0x8($s0)
    ctx->pc = 0x331cf0u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331cf4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x331cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331cf8: 0x960a000a  lhu         $t2, 0xA($s0)
    ctx->pc = 0x331cf8u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x331cfc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x331cfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d00: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x331d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d08: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x331D08u;
    {
        const bool branch_taken_0x331d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D08u;
        // 0x331d0c: 0x2406002e  addiu       $a2, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d08) {
            ctx->pc = 0x331D70u;
            goto label_331d70;
        }
    }
    ctx->pc = 0x331D10u;
label_331d10:
    // 0x331d10: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x331D10u;
    {
        const bool branch_taken_0x331d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D10u;
        // 0x331d14: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d10) {
            ctx->pc = 0x331D58u;
            goto label_331d58;
        }
    }
    ctx->pc = 0x331D18u;
    // 0x331d18: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x331d18u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331d1c: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x331d1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
    // 0x331d20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x331d20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x331d24: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x331d24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x331d28: 0x96090008  lhu         $t1, 0x8($s0)
    ctx->pc = 0x331d28u;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331d2c: 0x960a000a  lhu         $t2, 0xA($s0)
    ctx->pc = 0x331d2cu;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x331d30: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x331d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x331d34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x331d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d38: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x331d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d3c: 0xc0cc824  jal         func_332090
    ctx->pc = 0x331D3Cu;
    SET_GPR_U32(ctx, 31, 0x331D44u);
    ctx->pc = 0x331D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331D3Cu;
    // 0x331d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332090u, 0x331D3Cu, 0x331D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D44u;
label_331d44:
    // 0x331d44: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x331d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d48: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x331d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331d4c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x331D4Cu;
    {
        const bool branch_taken_0x331d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D4Cu;
        // 0x331d50: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d4c) {
            ctx->pc = 0x331D84u;
            goto label_331d84;
        }
    }
    ctx->pc = 0x331D54u;
    // 0x331d54: 0x0  nop
    ctx->pc = 0x331d54u;
    // NOP
label_331d58:
    // 0x331d58: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x331d58u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331d5c: 0x96090008  lhu         $t1, 0x8($s0)
    ctx->pc = 0x331d5cu;
    SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331d60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x331d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d64: 0x960a000a  lhu         $t2, 0xA($s0)
    ctx->pc = 0x331d64u;
    SET_GPR_ZE32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x331d68: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x331d68u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x331d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_331d70:
    // 0x331d70: 0xc0cc7c4  jal         func_331F10
    ctx->pc = 0x331D70u;
    SET_GPR_U32(ctx, 31, 0x331D78u);
    ctx->pc = 0x331F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331F10u, 0x331D70u, 0x331D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331D78u;
label_331d78:
    // 0x331d78: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x331d78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_331d7c:
    // 0x331d7c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x331d7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331d80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_331d84:
    // 0x331d84: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x331d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_331d88:
    // 0x331d88: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x331d88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x331d8c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x331d8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x331d90: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
    ctx->pc = 0x331D90u;
    {
        const bool branch_taken_0x331d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D90u;
        // 0x331d94: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d90) {
            ctx->pc = 0x331C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_331c10;
        }
    }
    ctx->pc = 0x331D98u;
label_331d98:
    // 0x331d98: 0x12a0001b  beqz        $s5, . + 4 + (0x1B << 2)
    ctx->pc = 0x331D98u;
    {
        const bool branch_taken_0x331d98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x331D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331D98u;
        // 0x331d9c: 0x2951823  subu        $v1, $s4, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331d98) {
            ctx->pc = 0x331E08u;
            goto label_331e08;
        }
    }
    ctx->pc = 0x331DA0u;
    // 0x331da0: 0x96060008  lhu         $a2, 0x8($s0)
    ctx->pc = 0x331da0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x331da4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x331da4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x331da8: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x331da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x331dac: 0x96040002  lhu         $a0, 0x2($s0)
    ctx->pc = 0x331dacu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x331db0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x331db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x331db4: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x331db4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x331db8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x331db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331dbc: 0x6323c  dsll32      $a2, $a2, 8
    ctx->pc = 0x331dbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 8));
    // 0x331dc0: 0x6323a  dsrl        $a2, $a2, 8
    ctx->pc = 0x331dc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 8);
    // 0x331dc4: 0x9605000a  lhu         $a1, 0xA($s0)
    ctx->pc = 0x331dc4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x331dc8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x331dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x331dcc: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x331dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x331dd0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x331dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x331dd4: 0xa6a30040  sh          $v1, 0x40($s5)
    ctx->pc = 0x331dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 64), (uint16_t)GPR_U32(ctx, 3));
    // 0x331dd8: 0x22fc2  srl         $a1, $v0, 31
    ctx->pc = 0x331dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x331ddc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x331ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x331de0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x331de0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x331de4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x331de4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x331de8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x331de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x331dec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x331decu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x331df0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331df4: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x331df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x331df8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x331df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x331dfc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x331dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x331e00: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x331e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x331e04: 0xfea20028  sd          $v0, 0x28($s5)
    ctx->pc = 0x331e04u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 2));
label_331e08:
    // 0x331e08: 0x2961023  subu        $v0, $s4, $s6
    ctx->pc = 0x331e08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
    // 0x331e0c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x331e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x331e10: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x331E10u;
    {
        const bool branch_taken_0x331e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E10u;
        // 0x331e14: 0x21902  srl         $v1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e10) {
            ctx->pc = 0x331EE0u;
            goto label_331ee0;
        }
    }
    ctx->pc = 0x331E18u;
    // 0x331e18: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x331e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x331e1c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x331e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x331e20: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x331e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x331e24: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x331e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x331e28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331e2c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x331e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x331e30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x331e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x331e34: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x331e34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x331e38: 0x7ec20000  sq          $v0, 0x0($s6)
    ctx->pc = 0x331e38u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), GPR_VEC(ctx, 2));
    // 0x331e3c: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x331e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x331e40: 0x26e20400  addiu       $v0, $s7, 0x400
    ctx->pc = 0x331e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
    // 0x331e44: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x331e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x331e48: 0x24460034  addiu       $a2, $v0, 0x34
    ctx->pc = 0x331e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x331e4c: 0x2c41824  and         $v1, $s6, $a0
    ctx->pc = 0x331e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & GPR_U64(ctx, 4));
    // 0x331e50: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x331e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x331e54: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x331E54u;
    {
        const bool branch_taken_0x331e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x331E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E54u;
        // 0x331e58: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e54) {
            ctx->pc = 0x331E70u;
            goto label_331e70;
        }
    }
    ctx->pc = 0x331E5Cu;
    // 0x331e5c: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x331e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x331e60: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x331e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x331e64: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x331E64u;
    {
        const bool branch_taken_0x331e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331E64u;
        // 0x331e68: 0x2c21025  or          $v0, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331e64) {
            ctx->pc = 0x331E80u;
            goto label_331e80;
        }
    }
    ctx->pc = 0x331E6Cu;
    // 0x331e6c: 0x0  nop
    ctx->pc = 0x331e6cu;
    // NOP
label_331e70:
    // 0x331e70: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x331e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x331e74: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x331e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x331e78: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x331e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x331e7c: 0x2c21024  and         $v0, $s6, $v0
    ctx->pc = 0x331e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
label_331e80:
    // 0x331e80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331e84: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x331e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x331e88: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x331e88u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x331e8c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x331e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x331e90: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x331e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x331e94: 0x831024  and         $v0, $a0, $v1
    ctx->pc = 0x331e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x331e98: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x331E98u;
    {
        const bool branch_taken_0x331e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331e98) {
            ctx->pc = 0x331E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331E98u;
            // 0x331e9c: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331EB0u;
            goto label_331eb0;
        }
    }
    ctx->pc = 0x331EA0u;
    // 0x331ea0: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x331ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x331ea4: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x331ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x331ea8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x331EA8u;
    {
        const bool branch_taken_0x331ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331EA8u;
        // 0x331eac: 0x821025  or          $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331ea8) {
            ctx->pc = 0x331EBCu;
            goto label_331ebc;
        }
    }
    ctx->pc = 0x331EB0u;
label_331eb0:
    // 0x331eb0: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x331eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x331eb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x331eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x331eb8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x331eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_331ebc:
    // 0x331ebc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x331ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x331ec0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x331ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x331ec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x331ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331ec8: 0x70431b89  pcpyld      $v1, $v0, $v1
    ctx->pc = 0x331ec8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x331ecc: 0x7e830000  sq          $v1, 0x0($s4)
    ctx->pc = 0x331eccu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 3));
    // 0x331ed0: 0x26e30400  addiu       $v1, $s7, 0x400
    ctx->pc = 0x331ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 1024));
    // 0x331ed4: 0x26820010  addiu       $v0, $s4, 0x10
    ctx->pc = 0x331ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x331ed8: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x331ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
    // 0x331edc: 0xacd40000  sw          $s4, 0x0($a2)
    ctx->pc = 0x331edcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 20));
label_331ee0:
    // 0x331ee0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x331ee0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331ee4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x331ee4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x331ee8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x331ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x331eec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x331eecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x331ef0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x331ef0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331ef4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x331ef4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x331ef8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x331ef8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x331efc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x331efcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x331f00: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x331f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x331f04: 0x3e00008  jr          $ra
    ctx->pc = 0x331F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331F04u;
        // 0x331f08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331F0Cu;
    // 0x331f0c: 0x0  nop
    ctx->pc = 0x331f0cu;
    // NOP
    ctx->pc = 0x331f10u;
}
