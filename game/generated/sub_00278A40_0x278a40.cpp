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

// Function: sub_00278A40
// Address: 0x278a40 - 0x278cb8
void sub_00278A40_0x278a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278A40_0x278a40");
#endif

    switch (ctx->pc) {
        case 0x278aa8u: goto label_278aa8;
        default: break;
    }

    ctx->pc = 0x278a40u;

    // 0x278a40: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x278a40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x278a44: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x278a44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a48: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x278a48u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278a4c: 0x240e0005  addiu       $t6, $zero, 0x5
    ctx->pc = 0x278a4cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x278a50: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x278A50u;
    {
        const bool branch_taken_0x278a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A50u;
        // 0x278a54: 0x240d0005  addiu       $t5, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a50) {
            ctx->pc = 0x278AD0u;
            goto label_278ad0;
        }
    }
    ctx->pc = 0x278A58u;
    // 0x278a58: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x278a58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x278a5c: 0x952406b4  lhu         $a0, 0x6B4($t1)
    ctx->pc = 0x278a5cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1716)));
    // 0x278a60: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x278a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x278a64: 0x2405f000  addiu       $a1, $zero, -0x1000
    ctx->pc = 0x278a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x278a68: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x278a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x278a6c: 0x30e3f000  andi        $v1, $a3, 0xF000
    ctx->pc = 0x278a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)61440);
    // 0x278a70: 0x3c0a0047  lui         $t2, 0x47
    ctx->pc = 0x278a70u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)71 << 16));
    // 0x278a74: 0x254a3d80  addiu       $t2, $t2, 0x3D80
    ctx->pc = 0x278a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15744));
    // 0x278a78: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x278a78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x278a7c: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x278a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x278a80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x278A80u;
    {
        const bool branch_taken_0x278a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A80u;
        // 0x278a84: 0x318bf000  andi        $t3, $t4, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a80) {
            ctx->pc = 0x278A98u;
            goto label_278a98;
        }
    }
    ctx->pc = 0x278A88u;
    // 0x278a88: 0xec1025  or          $v0, $a3, $t4
    ctx->pc = 0x278a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 12));
    // 0x278a8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x278a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x278a90: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278A90u;
    {
        const bool branch_taken_0x278a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A90u;
        // 0x278a94: 0x3048ffff  andi        $t0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a90) {
            ctx->pc = 0x278AA4u;
            goto label_278aa4;
        }
    }
    ctx->pc = 0x278A98u;
label_278a98:
    // 0x278a98: 0x4b1026  xor         $v0, $v0, $t3
    ctx->pc = 0x278a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 11));
    // 0x278a9c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x278a9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278aa0: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x278aa0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 0));
label_278aa4:
    // 0x278aa4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x278aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278aa8:
    // 0x278aa8: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x278aa8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x278aac: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x278aacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x278ab0: 0x30c500ff  andi        $a1, $a2, 0xFF
    ctx->pc = 0x278ab0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x278ab4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x278ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x278ab8: 0x481826  xor         $v1, $v0, $t0
    ctx->pc = 0x278ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
    // 0x278abc: 0x4b1026  xor         $v0, $v0, $t3
    ctx->pc = 0x278abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 11));
    // 0x278ac0: 0x28c4000a  slti        $a0, $a2, 0xA
    ctx->pc = 0x278ac0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x278ac4: 0xa3680a  movz        $t5, $a1, $v1
    ctx->pc = 0x278ac4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 13, GPR_VEC(ctx, 5));
    // 0x278ac8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278AC8u;
    {
        const bool branch_taken_0x278ac8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x278ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AC8u;
        // 0x278acc: 0xa2700a  movz        $t6, $a1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ac8) {
            ctx->pc = 0x278AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278aa8;
        }
    }
    ctx->pc = 0x278AD0u;
label_278ad0:
    // 0x278ad0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x278ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x278ad4: 0x55a20009  bnel        $t5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x278AD4u;
    {
        const bool branch_taken_0x278ad4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 2));
        if (branch_taken_0x278ad4) {
            ctx->pc = 0x278AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AD4u;
            // 0x278ad8: 0x91220191  lbu         $v0, 0x191($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 401)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AFCu;
            goto label_278afc;
        }
    }
    ctx->pc = 0x278ADCu;
    // 0x278adc: 0x952206ac  lhu         $v0, 0x6AC($t1)
    ctx->pc = 0x278adcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1708)));
    // 0x278ae0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x278ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x278ae4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x278AE4u;
    {
        const bool branch_taken_0x278ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278ae4) {
            ctx->pc = 0x278AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AE4u;
            // 0x278ae8: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AF8u;
            goto label_278af8;
        }
    }
    ctx->pc = 0x278AECu;
    // 0x278aec: 0x51cd0003  beql        $t6, $t5, . + 4 + (0x3 << 2)
    ctx->pc = 0x278AECu;
    {
        const bool branch_taken_0x278aec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 13));
        if (branch_taken_0x278aec) {
            ctx->pc = 0x278AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AECu;
            // 0x278af0: 0x91220191  lbu         $v0, 0x191($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 401)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AFCu;
            goto label_278afc;
        }
    }
    ctx->pc = 0x278AF4u;
    // 0x278af4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x278af4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278af8:
    // 0x278af8: 0x91220191  lbu         $v0, 0x191($t1)
    ctx->pc = 0x278af8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 401)));
label_278afc:
    // 0x278afc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278AFCu;
    {
        const bool branch_taken_0x278afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AFCu;
        // 0x278b00: 0x31820090  andi        $v0, $t4, 0x90 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)144);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278afc) {
            ctx->pc = 0x278B14u;
            goto label_278b14;
        }
    }
    ctx->pc = 0x278B04u;
    // 0x278b04: 0x91220200  lbu         $v0, 0x200($t1)
    ctx->pc = 0x278b04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 512)));
    // 0x278b08: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x278B08u;
    {
        const bool branch_taken_0x278b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B08u;
        // 0x278b0c: 0x30ea0080  andi        $t2, $a3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b08) {
            ctx->pc = 0x278B70u;
            goto label_278b70;
        }
    }
    ctx->pc = 0x278B10u;
    // 0x278b10: 0x31820090  andi        $v0, $t4, 0x90
    ctx->pc = 0x278b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)144);
label_278b14:
    // 0x278b14: 0x30ea0080  andi        $t2, $a3, 0x80
    ctx->pc = 0x278b14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x278b18: 0x30e60010  andi        $a2, $a3, 0x10
    ctx->pc = 0x278b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
    // 0x278b1c: 0x38420090  xori        $v0, $v0, 0x90
    ctx->pc = 0x278b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)144);
    // 0x278b20: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x278b20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x278B24u;
    {
        const bool branch_taken_0x278b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B24u;
        // 0x278b28: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b24) {
            ctx->pc = 0x278B48u;
            goto label_278b48;
        }
    }
    ctx->pc = 0x278B2Cu;
    // 0x278b2c: 0x15400003  bnez        $t2, . + 4 + (0x3 << 2)
    ctx->pc = 0x278B2Cu;
    {
        const bool branch_taken_0x278b2c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x278B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B2Cu;
        // 0x278b30: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b2c) {
            ctx->pc = 0x278B3Cu;
            goto label_278b3c;
        }
    }
    ctx->pc = 0x278B34u;
    // 0x278b34: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x278B34u;
    {
        const bool branch_taken_0x278b34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x278b34) {
            ctx->pc = 0x278B48u;
            goto label_278b48;
        }
    }
    ctx->pc = 0x278B3Cu;
label_278b3c:
    // 0x278b3c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x278B3Cu;
    {
        const bool branch_taken_0x278b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B3Cu;
        // 0x278b40: 0xa1220200  sb          $v0, 0x200($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 512), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b3c) {
            ctx->pc = 0x278B74u;
            goto label_278b74;
        }
    }
    ctx->pc = 0x278B44u;
    // 0x278b44: 0x0  nop
    ctx->pc = 0x278b44u;
    // NOP
label_278b48:
    // 0x278b48: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x278B48u;
    {
        const bool branch_taken_0x278b48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B48u;
        // 0x278b4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b48) {
            ctx->pc = 0x278B58u;
            goto label_278b58;
        }
    }
    ctx->pc = 0x278B50u;
    // 0x278b50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x278B50u;
    {
        const bool branch_taken_0x278b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B50u;
        // 0x278b54: 0xa1220200  sb          $v0, 0x200($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 512), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b50) {
            ctx->pc = 0x278B74u;
            goto label_278b74;
        }
    }
    ctx->pc = 0x278B58u;
label_278b58:
    // 0x278b58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x278B58u;
    {
        const bool branch_taken_0x278b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B58u;
        // 0x278b5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b58) {
            ctx->pc = 0x278B68u;
            goto label_278b68;
        }
    }
    ctx->pc = 0x278B60u;
    // 0x278b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278B60u;
    {
        const bool branch_taken_0x278b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B60u;
        // 0x278b64: 0xa1220200  sb          $v0, 0x200($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 512), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b60) {
            ctx->pc = 0x278B74u;
            goto label_278b74;
        }
    }
    ctx->pc = 0x278B68u;
label_278b68:
    // 0x278b68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x278B68u;
    {
        const bool branch_taken_0x278b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B68u;
        // 0x278b6c: 0xa1200200  sb          $zero, 0x200($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 512), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b68) {
            ctx->pc = 0x278B74u;
            goto label_278b74;
        }
    }
    ctx->pc = 0x278B70u;
label_278b70:
    // 0x278b70: 0x30e60010  andi        $a2, $a3, 0x10
    ctx->pc = 0x278b70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_278b74:
    // 0x278b74: 0x31820080  andi        $v0, $t4, 0x80
    ctx->pc = 0x278b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)128);
    // 0x278b78: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x278b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x278b7c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x278b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x278b80: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x278b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x278b84: 0x82400a  movz        $t0, $a0, $v0
    ctx->pc = 0x278b84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x278b88: 0x31840040  andi        $a0, $t4, 0x40
    ctx->pc = 0x278b88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)64);
    // 0x278b8c: 0x35020020  ori         $v0, $t0, 0x20
    ctx->pc = 0x278b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32);
    // 0x278b90: 0x31830010  andi        $v1, $t4, 0x10
    ctx->pc = 0x278b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)16);
    // 0x278b94: 0x35050200  ori         $a1, $t0, 0x200
    ctx->pc = 0x278b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)512);
    // 0x278b98: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x278b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278b9c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x278b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x278ba0: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x278ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x278ba4: 0xa3400a  movz        $t0, $a1, $v1
    ctx->pc = 0x278ba4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x278ba8: 0x31830020  andi        $v1, $t4, 0x20
    ctx->pc = 0x278ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)32);
    // 0x278bac: 0x35020040  ori         $v0, $t0, 0x40
    ctx->pc = 0x278bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)64);
    // 0x278bb0: 0x35050400  ori         $a1, $t0, 0x400
    ctx->pc = 0x278bb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1024);
    // 0x278bb4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x278bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bb8: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x278bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x278bbc: 0xa4400a  movz        $t0, $a1, $a0
    ctx->pc = 0x278bbcu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
    // 0x278bc0: 0x39450000  xori        $a1, $t2, 0x0
    ctx->pc = 0x278bc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) ^ (uint64_t)(uint16_t)0);
    // 0x278bc4: 0x35020080  ori         $v0, $t0, 0x80
    ctx->pc = 0x278bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)128);
    // 0x278bc8: 0x35040800  ori         $a0, $t0, 0x800
    ctx->pc = 0x278bc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2048);
    // 0x278bcc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x278bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278bd0: 0x38c60000  xori        $a2, $a2, 0x0
    ctx->pc = 0x278bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)0);
    // 0x278bd4: 0x83400a  movz        $t0, $a0, $v1
    ctx->pc = 0x278bd4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
    // 0x278bd8: 0x30e30040  andi        $v1, $a3, 0x40
    ctx->pc = 0x278bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)64);
    // 0x278bdc: 0x35020001  ori         $v0, $t0, 0x1
    ctx->pc = 0x278bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x278be0: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x278be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x278be4: 0x45400b  movn        $t0, $v0, $a1
    ctx->pc = 0x278be4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x278be8: 0x31a5000f  andi        $a1, $t5, 0xF
    ctx->pc = 0x278be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x278bec: 0x35020002  ori         $v0, $t0, 0x2
    ctx->pc = 0x278becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
    // 0x278bf0: 0x30e40020  andi        $a0, $a3, 0x20
    ctx->pc = 0x278bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x278bf4: 0x46400b  movn        $t0, $v0, $a2
    ctx->pc = 0x278bf4u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x278bf8: 0x31c6000f  andi        $a2, $t6, 0xF
    ctx->pc = 0x278bf8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x278bfc: 0x35020004  ori         $v0, $t0, 0x4
    ctx->pc = 0x278bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4);
    // 0x278c00: 0x38840000  xori        $a0, $a0, 0x0
    ctx->pc = 0x278c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)0);
    // 0x278c04: 0x43400b  movn        $t0, $v0, $v1
    ctx->pc = 0x278c04u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x278c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x278c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x278c0c: 0x35020008  ori         $v0, $t0, 0x8
    ctx->pc = 0x278c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8);
    // 0x278c10: 0xa32804  sllv        $a1, $v1, $a1
    ctx->pc = 0x278c10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x278c14: 0x44400b  movn        $t0, $v0, $a0
    ctx->pc = 0x278c14u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 2));
    // 0x278c18: 0x31820004  andi        $v0, $t4, 0x4
    ctx->pc = 0x278c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
    // 0x278c1c: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x278c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x278c20: 0xa52806aa  sh          $t0, 0x6AA($t1)
    ctx->pc = 0x278c20u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1706), (uint16_t)GPR_U32(ctx, 8));
    // 0x278c24: 0xa52306ac  sh          $v1, 0x6AC($t1)
    ctx->pc = 0x278c24u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1708), (uint16_t)GPR_U32(ctx, 3));
    // 0x278c28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278C28u;
    {
        const bool branch_taken_0x278c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C28u;
        // 0x278c2c: 0xa52506ae  sh          $a1, 0x6AE($t1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 9), 1710), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c28) {
            ctx->pc = 0x278C40u;
            goto label_278c40;
        }
    }
    ctx->pc = 0x278C30u;
    // 0x278c30: 0x34622000  ori         $v0, $v1, 0x2000
    ctx->pc = 0x278c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x278c34: 0x34a32000  ori         $v1, $a1, 0x2000
    ctx->pc = 0x278c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x278c38: 0xa52206ac  sh          $v0, 0x6AC($t1)
    ctx->pc = 0x278c38u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1708), (uint16_t)GPR_U32(ctx, 2));
    // 0x278c3c: 0xa52306ae  sh          $v1, 0x6AE($t1)
    ctx->pc = 0x278c3cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1710), (uint16_t)GPR_U32(ctx, 3));
label_278c40:
    // 0x278c40: 0x31820008  andi        $v0, $t4, 0x8
    ctx->pc = 0x278c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8);
    // 0x278c44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x278C44u;
    {
        const bool branch_taken_0x278c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C44u;
        // 0x278c48: 0x30e20004  andi        $v0, $a3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c44) {
            ctx->pc = 0x278C68u;
            goto label_278c68;
        }
    }
    ctx->pc = 0x278C4Cu;
    // 0x278c4c: 0x952206ac  lhu         $v0, 0x6AC($t1)
    ctx->pc = 0x278c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1708)));
    // 0x278c50: 0x952306ae  lhu         $v1, 0x6AE($t1)
    ctx->pc = 0x278c50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1710)));
    // 0x278c54: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x278c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x278c58: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x278c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x278c5c: 0xa52206ac  sh          $v0, 0x6AC($t1)
    ctx->pc = 0x278c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1708), (uint16_t)GPR_U32(ctx, 2));
    // 0x278c60: 0xa52306ae  sh          $v1, 0x6AE($t1)
    ctx->pc = 0x278c60u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1710), (uint16_t)GPR_U32(ctx, 3));
    // 0x278c64: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x278c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_278c68:
    // 0x278c68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x278C68u;
    {
        const bool branch_taken_0x278c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C68u;
        // 0x278c6c: 0x30e20008  andi        $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c68) {
            ctx->pc = 0x278C8Cu;
            goto label_278c8c;
        }
    }
    ctx->pc = 0x278C70u;
    // 0x278c70: 0x952206ac  lhu         $v0, 0x6AC($t1)
    ctx->pc = 0x278c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1708)));
    // 0x278c74: 0x952306ae  lhu         $v1, 0x6AE($t1)
    ctx->pc = 0x278c74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1710)));
    // 0x278c78: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x278c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x278c7c: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x278c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
    // 0x278c80: 0xa52206ac  sh          $v0, 0x6AC($t1)
    ctx->pc = 0x278c80u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1708), (uint16_t)GPR_U32(ctx, 2));
    // 0x278c84: 0xa52306ae  sh          $v1, 0x6AE($t1)
    ctx->pc = 0x278c84u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1710), (uint16_t)GPR_U32(ctx, 3));
    // 0x278c88: 0x30e20008  andi        $v0, $a3, 0x8
    ctx->pc = 0x278c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_278c8c:
    // 0x278c8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x278C8Cu;
    {
        const bool branch_taken_0x278c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278c8c) {
            ctx->pc = 0x278CACu;
            goto label_278cac;
        }
    }
    ctx->pc = 0x278C94u;
    // 0x278c94: 0x952206ac  lhu         $v0, 0x6AC($t1)
    ctx->pc = 0x278c94u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1708)));
    // 0x278c98: 0x952306ae  lhu         $v1, 0x6AE($t1)
    ctx->pc = 0x278c98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 1710)));
    // 0x278c9c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x278c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x278ca0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x278ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x278ca4: 0xa52206ac  sh          $v0, 0x6AC($t1)
    ctx->pc = 0x278ca4u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1708), (uint16_t)GPR_U32(ctx, 2));
    // 0x278ca8: 0xa52306ae  sh          $v1, 0x6AE($t1)
    ctx->pc = 0x278ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 1710), (uint16_t)GPR_U32(ctx, 3));
label_278cac:
    // 0x278cac: 0x3e00008  jr          $ra
    ctx->pc = 0x278CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CACu;
        // 0x278cb0: 0xad2c06b4  sw          $t4, 0x6B4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 1716), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278CB4u;
    // 0x278cb4: 0x0  nop
    ctx->pc = 0x278cb4u;
    // NOP
    ctx->pc = 0x278cb8u;
}
