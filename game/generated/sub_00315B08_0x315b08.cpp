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

// Function: sub_00315B08
// Address: 0x315b08 - 0x315e80
void sub_00315B08_0x315b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315B08_0x315b08");
#endif

    switch (ctx->pc) {
        case 0x315bd8u: goto label_315bd8;
        case 0x315c10u: goto label_315c10;
        case 0x315d60u: goto label_315d60;
        default: break;
    }

    ctx->pc = 0x315b08u;

    // 0x315b08: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x315b08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x315b0c: 0x2402011e  addiu       $v0, $zero, 0x11E
    ctx->pc = 0x315b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x315b10: 0x846ba  dsrl        $t0, $t0, 26
    ctx->pc = 0x315b10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x315b14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x315b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x315b18: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x315b18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x315b1c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x315b1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x315b20: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x315b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x315b24: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x315b24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x315b28: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x315b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x315b2c: 0x843fc  dsll32      $t0, $t0, 15
    ctx->pc = 0x315b2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 15));
    // 0x315b30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x315b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x315b34: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x315b34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b38: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x315b38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x315b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x315b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x315b40: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x315b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x315b44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x315b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x315b48: 0x3463f900  ori         $v1, $v1, 0xF900
    ctx->pc = 0x315b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63744);
    // 0x315b4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x315b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x315b50: 0x34633f7f  ori         $v1, $v1, 0x3F7F
    ctx->pc = 0x315b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16255);
    // 0x315b54: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x315b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x315b58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x315b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x315b5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x315b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x315b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x315b64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x315b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b68: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x315b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x315b6c: 0x24140048  addiu       $s4, $zero, 0x48
    ctx->pc = 0x315b6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x315b70: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x315b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x315b74: 0x241500c8  addiu       $s5, $zero, 0xC8
    ctx->pc = 0x315b74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x315b78: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x315b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x315b7c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x315b7cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315b80: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x315b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x315b84: 0x7b83c  dsll32      $s7, $a3, 0
    ctx->pc = 0x315b84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 0));
    // 0x315b88: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x315b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x315b8c: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x315b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x315b90: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315b90u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315b94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x315b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x315b98: 0xfd480000  sd          $t0, 0x0($t2)
    ctx->pc = 0x315b98u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 8));
    // 0x315b9c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315ba0: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315ba4: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x315ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x315ba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315bac: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x315bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x315bb0: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x315bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x315bb4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315bb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315bb8: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x315bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x315bbc: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315bc0: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315bc4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315bc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315bc8: 0x24906c00  addiu       $s0, $a0, 0x6C00
    ctx->pc = 0x315bc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x315bcc: 0x2e0c82d  daddu       $t9, $s7, $zero
    ctx->pc = 0x315bccu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bd0: 0x24896c80  addiu       $t1, $a0, 0x6C80
    ctx->pc = 0x315bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 27776));
    // 0x315bd4: 0x168900  sll         $s1, $s6, 4
    ctx->pc = 0x315bd4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_315bd8:
    // 0x315bd8: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x315bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x315bdc: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x315bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x315be0: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x315be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x315be4: 0x9283c  dsll32      $a1, $t1, 0
    ctx->pc = 0x315be4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 0));
    // 0x315be8: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x315be8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x315bec: 0x3783e  dsrl32      $t7, $v1, 0
    ctx->pc = 0x315becu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x315bf0: 0x4703e  dsrl32      $t6, $a0, 0
    ctx->pc = 0x315bf0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x315bf4: 0x5683e  dsrl32      $t5, $a1, 0
    ctx->pc = 0x315bf4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x315bf8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x315bf8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315bfc: 0x26277300  addiu       $a3, $s1, 0x7300
    ctx->pc = 0x315bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 29440));
    // 0x315c00: 0x26267220  addiu       $a2, $s1, 0x7220
    ctx->pc = 0x315c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 29216));
    // 0x315c04: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x315c04u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x315c08: 0x3c0801b4  lui         $t0, 0x1B4
    ctx->pc = 0x315c08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)436 << 16));
    // 0x315c0c: 0x0  nop
    ctx->pc = 0x315c0cu;
    // NOP
label_315c10:
    // 0x315c10: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x315c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x315c14: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x315c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x315c18: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x315c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x315c1c: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x315c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x315c20: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x315c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x315c24: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x315c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x315c28: 0x1e21025  or          $v0, $t7, $v0
    ctx->pc = 0x315c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x315c2c: 0x30b2025  or          $a0, $t8, $t3
    ctx->pc = 0x315c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 11));
    // 0x315c30: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x315c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x315c34: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x315c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x315c38: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x315c38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x315c3c: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x315c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x315c40: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315c40u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315c44: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315c44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315c48: 0x1c81025  or          $v0, $t6, $t0
    ctx->pc = 0x315c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x315c4c: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x315c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x315c50: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x315c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x315c54: 0x2d850020  sltiu       $a1, $t4, 0x20
    ctx->pc = 0x315c54u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x315c58: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315c58u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315c5c: 0x164582d  daddu       $t3, $t3, $a0
    ctx->pc = 0x315c5cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 4));
    // 0x315c60: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315c60u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315c64: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315c64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315c68: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x315C68u;
    {
        const bool branch_taken_0x315c68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x315C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C68u;
        // 0x315c6c: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c68) {
            ctx->pc = 0x315C10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315c10;
        }
    }
    ctx->pc = 0x315C70u;
    // 0x315c70: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x315c70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x315c74: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x315c74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x315c78: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x315c78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x315c7c: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x315c7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x315c80: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x315c80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x315c84: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x315C84u;
    {
        const bool branch_taken_0x315c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C84u;
        // 0x315c88: 0x26940100  addiu       $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c84) {
            ctx->pc = 0x315BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315bd8;
        }
    }
    ctx->pc = 0x315C8Cu;
    // 0x315c8c: 0x26480700  addiu       $t0, $s2, 0x700
    ctx->pc = 0x315c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    // 0x315c90: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x315c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x315c94: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315c98: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x315c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x315c9c: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x315c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x315ca0: 0x264406c0  addiu       $a0, $s2, 0x6C0
    ctx->pc = 0x315ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1728));
    // 0x315ca4: 0x264506d0  addiu       $a1, $s2, 0x6D0
    ctx->pc = 0x315ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x315ca8: 0x264606e0  addiu       $a2, $s2, 0x6E0
    ctx->pc = 0x315ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1760));
    // 0x315cac: 0x264706f0  addiu       $a3, $s2, 0x6F0
    ctx->pc = 0x315cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1776));
    // 0x315cb0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315cb4: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315cb8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315cb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315cbc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x315cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x315cc0: 0x24033f77  addiu       $v1, $zero, 0x3F77
    ctx->pc = 0x315cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16247));
    // 0x315cc4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x315cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x315cc8: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x315cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x315ccc: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x315cccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x315cd0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x315cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x315cd4: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x315cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x315cd8: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315cdc: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x315cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x315ce0: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315ce4: 0x164900  sll         $t1, $s6, 4
    ctx->pc = 0x315ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x315ce8: 0x24160588  addiu       $s6, $zero, 0x588
    ctx->pc = 0x315ce8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1416));
    // 0x315cec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x315cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x315cf0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x315cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x315cf4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x315cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x315cf8: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x315cf8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x315cfc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x315cfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x315d00: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x315d00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x315d04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315d08: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x315d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x315d0c: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x315d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x315d10: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315d10u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315d14: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315d14u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315d18: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315d18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315d1c: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x315d1cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315d20: 0x24170488  addiu       $s7, $zero, 0x488
    ctx->pc = 0x315d20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
    // 0x315d24: 0x252e7200  addiu       $t6, $t1, 0x7200
    ctx->pc = 0x315d24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 29184));
    // 0x315d28: 0x25297220  addiu       $t1, $t1, 0x7220
    ctx->pc = 0x315d28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29216));
    // 0x315d2c: 0x4903e  dsrl32      $s2, $a0, 0
    ctx->pc = 0x315d2cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x315d30: 0x5883e  dsrl32      $s1, $a1, 0
    ctx->pc = 0x315d30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x315d34: 0x6803e  dsrl32      $s0, $a2, 0
    ctx->pc = 0x315d34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x315d38: 0x7783e  dsrl32      $t7, $a3, 0
    ctx->pc = 0x315d38u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x315d3c: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x315d3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x315d40: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x315d40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315d44: 0x241e0188  addiu       $fp, $zero, 0x188
    ctx->pc = 0x315d44u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x315d48: 0x24190288  addiu       $t9, $zero, 0x288
    ctx->pc = 0x315d48u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 648));
    // 0x315d4c: 0x24180388  addiu       $t8, $zero, 0x388
    ctx->pc = 0x315d4cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x315d50: 0x24150688  addiu       $s5, $zero, 0x688
    ctx->pc = 0x315d50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1672));
    // 0x315d54: 0x24140788  addiu       $s4, $zero, 0x788
    ctx->pc = 0x315d54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1928));
    // 0x315d58: 0x3c0d0008  lui         $t5, 0x8
    ctx->pc = 0x315d58u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)8 << 16));
    // 0x315d5c: 0x3c0c0028  lui         $t4, 0x28
    ctx->pc = 0x315d5cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)40 << 16));
label_315d60:
    // 0x315d60: 0xe303c  dsll32      $a2, $t6, 0
    ctx->pc = 0x315d60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) << (32 + 0));
    // 0x315d64: 0x25ce0040  addiu       $t6, $t6, 0x40
    ctx->pc = 0x315d64u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x315d68: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x315d68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x315d6c: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x315d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x315d70: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x315d70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x315d74: 0x2461025  or          $v0, $s2, $a2
    ctx->pc = 0x315d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x315d78: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x315d78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x315d7c: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x315d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x315d80: 0x1a41825  or          $v1, $t5, $a0
    ctx->pc = 0x315d80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x315d84: 0x2272025  or          $a0, $s1, $a3
    ctx->pc = 0x315d84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x315d88: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x315d88u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x315d8c: 0x2261825  or          $v1, $s1, $a2
    ctx->pc = 0x315d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x315d90: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315d90u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315d94: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315d98: 0x19e1025  or          $v0, $t4, $fp
    ctx->pc = 0x315d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 30));
    // 0x315d9c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x315d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x315da0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315da0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315da4: 0x1b91025  or          $v0, $t5, $t9
    ctx->pc = 0x315da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 25));
    // 0x315da8: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x315da8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x315dac: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315dacu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315db0: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x315db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x315db4: 0x2072025  or          $a0, $s0, $a3
    ctx->pc = 0x315db4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    // 0x315db8: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315db8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315dbc: 0x1981025  or          $v0, $t4, $t8
    ctx->pc = 0x315dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 24));
    // 0x315dc0: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315dc4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315dc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315dc8: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x315dc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x315dcc: 0x2062825  or          $a1, $s0, $a2
    ctx->pc = 0x315dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x315dd0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315dd4: 0x1b71025  or          $v0, $t5, $s7
    ctx->pc = 0x315dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 23));
    // 0x315dd8: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x315dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x315ddc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315ddcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315de0: 0x1e71825  or          $v1, $t7, $a3
    ctx->pc = 0x315de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x315de4: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x315de4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x315de8: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x315de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x315dec: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315decu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315df0: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x315df0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x315df4: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315df4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315df8: 0x1961025  or          $v0, $t4, $s6
    ctx->pc = 0x315df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 22));
    // 0x315dfc: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x315dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x315e00: 0x1e63025  or          $a2, $t7, $a2
    ctx->pc = 0x315e00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
    // 0x315e04: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315e04u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315e08: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315e08u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315e0c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315e0cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315e10: 0x1b51025  or          $v0, $t5, $s5
    ctx->pc = 0x315e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 21));
    // 0x315e14: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x315e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x315e18: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x315e18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x315e1c: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315e20: 0xfd460008  sd          $a2, 0x8($t2)
    ctx->pc = 0x315e20u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 6));
    // 0x315e24: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315e24u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315e28: 0x1941025  or          $v0, $t4, $s4
    ctx->pc = 0x315e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 20));
    // 0x315e2c: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x315e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x315e30: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x315e30u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x315e34: 0x2e640020  sltiu       $a0, $s3, 0x20
    ctx->pc = 0x315e34u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x315e38: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315e38u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315e3c: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x315e3cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x315e40: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x315e40u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
    // 0x315e44: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315e44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315e48: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x315e48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x315e4c: 0x1480ffc4  bnez        $a0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x315E4Cu;
    {
        const bool branch_taken_0x315e4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x315E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E4Cu;
        // 0x315e50: 0x183602d  daddu       $t4, $t4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e4c) {
            ctx->pc = 0x315D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315d60;
        }
    }
    ctx->pc = 0x315E54u;
    // 0x315e54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x315e54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315e58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x315e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x315e5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x315e5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315e60: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x315e60u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x315e64: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x315e64u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x315e68: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x315e68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x315e6c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x315e6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x315e70: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x315e70u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x315e74: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x315e74u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x315e78: 0x3e00008  jr          $ra
    ctx->pc = 0x315E78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E78u;
        // 0x315e7c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315E78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315E80u;
}
