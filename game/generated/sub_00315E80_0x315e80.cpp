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

// Function: sub_00315E80
// Address: 0x315e80 - 0x3161f8
void sub_00315E80_0x315e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315E80_0x315e80");
#endif

    switch (ctx->pc) {
        case 0x315f50u: goto label_315f50;
        case 0x315f88u: goto label_315f88;
        case 0x3160d8u: goto label_3160d8;
        default: break;
    }

    ctx->pc = 0x315e80u;

    // 0x315e80: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x315e80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x315e84: 0x2402011e  addiu       $v0, $zero, 0x11E
    ctx->pc = 0x315e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 286));
    // 0x315e88: 0x846ba  dsrl        $t0, $t0, 26
    ctx->pc = 0x315e88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 26);
    // 0x315e8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x315e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x315e90: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x315e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x315e94: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x315e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x315e98: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x315e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x315e9c: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x315e9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x315ea0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x315ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x315ea4: 0x843fc  dsll32      $t0, $t0, 15
    ctx->pc = 0x315ea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 15));
    // 0x315ea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x315ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x315eac: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x315eacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315eb0: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x315eb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x315eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x315eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x315eb8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x315eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x315ebc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x315ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x315ec0: 0x3463f900  ori         $v1, $v1, 0xF900
    ctx->pc = 0x315ec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63744);
    // 0x315ec4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x315ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x315ec8: 0x34633f7f  ori         $v1, $v1, 0x3F7F
    ctx->pc = 0x315ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16255);
    // 0x315ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x315eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x315ed0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x315ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x315ed4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x315ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ed8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x315ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x315edc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x315edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ee0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x315ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x315ee4: 0x24140048  addiu       $s4, $zero, 0x48
    ctx->pc = 0x315ee4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x315ee8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x315ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x315eec: 0x241500c8  addiu       $s5, $zero, 0xC8
    ctx->pc = 0x315eecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x315ef0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x315ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x315ef4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x315ef4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315ef8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x315ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x315efc: 0x7b83c  dsll32      $s7, $a3, 0
    ctx->pc = 0x315efcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 7) << (32 + 0));
    // 0x315f00: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x315f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x315f04: 0x122100  sll         $a0, $s2, 4
    ctx->pc = 0x315f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x315f08: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315f08u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315f0c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x315f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x315f10: 0xfd480000  sd          $t0, 0x0($t2)
    ctx->pc = 0x315f10u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 8));
    // 0x315f14: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315f14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315f18: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315f18u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315f1c: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x315f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x315f20: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x315f24: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x315f24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x315f28: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x315f28u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x315f2c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315f2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315f30: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x315f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x315f34: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315f34u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315f38: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315f38u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315f3c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315f40: 0x24906c00  addiu       $s0, $a0, 0x6C00
    ctx->pc = 0x315f40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 27648));
    // 0x315f44: 0x2e0c82d  daddu       $t9, $s7, $zero
    ctx->pc = 0x315f44u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f48: 0x24896c80  addiu       $t1, $a0, 0x6C80
    ctx->pc = 0x315f48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 27776));
    // 0x315f4c: 0x168900  sll         $s1, $s6, 4
    ctx->pc = 0x315f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
label_315f50:
    // 0x315f50: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x315f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
    // 0x315f54: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x315f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x315f58: 0x15203c  dsll32      $a0, $s5, 0
    ctx->pc = 0x315f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) << (32 + 0));
    // 0x315f5c: 0x9283c  dsll32      $a1, $t1, 0
    ctx->pc = 0x315f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) << (32 + 0));
    // 0x315f60: 0x2c03e  dsrl32      $t8, $v0, 0
    ctx->pc = 0x315f60u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x315f64: 0x3783e  dsrl32      $t7, $v1, 0
    ctx->pc = 0x315f64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x315f68: 0x4703e  dsrl32      $t6, $a0, 0
    ctx->pc = 0x315f68u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x315f6c: 0x5683e  dsrl32      $t5, $a1, 0
    ctx->pc = 0x315f6cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x315f70: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x315f70u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315f74: 0x262772e0  addiu       $a3, $s1, 0x72E0
    ctx->pc = 0x315f74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 29408));
    // 0x315f78: 0x26267200  addiu       $a2, $s1, 0x7200
    ctx->pc = 0x315f78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 29184));
    // 0x315f7c: 0x3c0b0064  lui         $t3, 0x64
    ctx->pc = 0x315f7cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)100 << 16));
    // 0x315f80: 0x3c0801b4  lui         $t0, 0x1B4
    ctx->pc = 0x315f80u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)436 << 16));
    // 0x315f84: 0x0  nop
    ctx->pc = 0x315f84u;
    // NOP
label_315f88:
    // 0x315f88: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x315f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x315f8c: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x315f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x315f90: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x315f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x315f94: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x315f94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x315f98: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x315f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x315f9c: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x315f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x315fa0: 0x1e21025  or          $v0, $t7, $v0
    ctx->pc = 0x315fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x315fa4: 0x30b2025  or          $a0, $t8, $t3
    ctx->pc = 0x315fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 24) | GPR_U64(ctx, 11));
    // 0x315fa8: 0x591025  or          $v0, $v0, $t9
    ctx->pc = 0x315fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 25));
    // 0x315fac: 0x1a31825  or          $v1, $t5, $v1
    ctx->pc = 0x315facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 3));
    // 0x315fb0: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x315fb0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x315fb4: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x315fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x315fb8: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x315fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x315fbc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315fc0: 0x1c81025  or          $v0, $t6, $t0
    ctx->pc = 0x315fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 8));
    // 0x315fc4: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x315fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x315fc8: 0x791825  or          $v1, $v1, $t9
    ctx->pc = 0x315fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 25));
    // 0x315fcc: 0x2d850020  sltiu       $a1, $t4, 0x20
    ctx->pc = 0x315fccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x315fd0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x315fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x315fd4: 0x164582d  daddu       $t3, $t3, $a0
    ctx->pc = 0x315fd4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 4));
    // 0x315fd8: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x315fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x315fdc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x315fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x315fe0: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x315FE0u;
    {
        const bool branch_taken_0x315fe0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x315FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FE0u;
        // 0x315fe4: 0x104402d  daddu       $t0, $t0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fe0) {
            ctx->pc = 0x315F88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315f88;
        }
    }
    ctx->pc = 0x315FE8u;
    // 0x315fe8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x315fe8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x315fec: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x315fecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x315ff0: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x315ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x315ff4: 0x26b50100  addiu       $s5, $s5, 0x100
    ctx->pc = 0x315ff4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x315ff8: 0x26100080  addiu       $s0, $s0, 0x80
    ctx->pc = 0x315ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x315ffc: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x315FFCu;
    {
        const bool branch_taken_0x315ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x316000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FFCu;
        // 0x316000: 0x26940100  addiu       $s4, $s4, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ffc) {
            ctx->pc = 0x315F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315f50;
        }
    }
    ctx->pc = 0x316004u;
    // 0x316004: 0x26480700  addiu       $t0, $s2, 0x700
    ctx->pc = 0x316004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 1792));
    // 0x316008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x316008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x31600c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31600cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316010: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x316010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x316014: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x316014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x316018: 0x264406c0  addiu       $a0, $s2, 0x6C0
    ctx->pc = 0x316018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1728));
    // 0x31601c: 0x264506d0  addiu       $a1, $s2, 0x6D0
    ctx->pc = 0x31601cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1744));
    // 0x316020: 0x264606e0  addiu       $a2, $s2, 0x6E0
    ctx->pc = 0x316020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1760));
    // 0x316024: 0x264706f0  addiu       $a3, $s2, 0x6F0
    ctx->pc = 0x316024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 1776));
    // 0x316028: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316028u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x31602c: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x31602cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x316030: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316034: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x316034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x316038: 0x24033f77  addiu       $v1, $zero, 0x3F77
    ctx->pc = 0x316038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16247));
    // 0x31603c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x31603cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x316040: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x316040u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x316044: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x316044u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x316048: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x316048u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x31604c: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x31604cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x316050: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x316050u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x316054: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x316054u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x316058: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x31605c: 0x164900  sll         $t1, $s6, 4
    ctx->pc = 0x31605cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x316060: 0x24160588  addiu       $s6, $zero, 0x588
    ctx->pc = 0x316060u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1416));
    // 0x316064: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x316064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x316068: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x316068u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x31606c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x31606cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x316070: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x316070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x316074: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x316074u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x316078: 0x3c022400  lui         $v0, 0x2400
    ctx->pc = 0x316078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9216 << 16));
    // 0x31607c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x316080: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x316080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x316084: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x316084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x316088: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316088u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x31608c: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x31608cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x316090: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316090u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316094: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x316094u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316098: 0x24170488  addiu       $s7, $zero, 0x488
    ctx->pc = 0x316098u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1160));
    // 0x31609c: 0x252e7220  addiu       $t6, $t1, 0x7220
    ctx->pc = 0x31609cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 9), 29216));
    // 0x3160a0: 0x25297240  addiu       $t1, $t1, 0x7240
    ctx->pc = 0x3160a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 29248));
    // 0x3160a4: 0x4903e  dsrl32      $s2, $a0, 0
    ctx->pc = 0x3160a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3160a8: 0x5883e  dsrl32      $s1, $a1, 0
    ctx->pc = 0x3160a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x3160ac: 0x6803e  dsrl32      $s0, $a2, 0
    ctx->pc = 0x3160acu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3160b0: 0x7783e  dsrl32      $t7, $a3, 0
    ctx->pc = 0x3160b0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x3160b4: 0x8403e  dsrl32      $t0, $t0, 0
    ctx->pc = 0x3160b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> (32 + 0));
    // 0x3160b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3160b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3160bc: 0x241e0188  addiu       $fp, $zero, 0x188
    ctx->pc = 0x3160bcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x3160c0: 0x24190288  addiu       $t9, $zero, 0x288
    ctx->pc = 0x3160c0u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 648));
    // 0x3160c4: 0x24180388  addiu       $t8, $zero, 0x388
    ctx->pc = 0x3160c4u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 904));
    // 0x3160c8: 0x24150688  addiu       $s5, $zero, 0x688
    ctx->pc = 0x3160c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1672));
    // 0x3160cc: 0x24140788  addiu       $s4, $zero, 0x788
    ctx->pc = 0x3160ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1928));
    // 0x3160d0: 0x3c0d0068  lui         $t5, 0x68
    ctx->pc = 0x3160d0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)104 << 16));
    // 0x3160d4: 0x3c0c0088  lui         $t4, 0x88
    ctx->pc = 0x3160d4u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)136 << 16));
label_3160d8:
    // 0x3160d8: 0xe303c  dsll32      $a2, $t6, 0
    ctx->pc = 0x3160d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) << (32 + 0));
    // 0x3160dc: 0x25ce0040  addiu       $t6, $t6, 0x40
    ctx->pc = 0x3160dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 64));
    // 0x3160e0: 0x6343a  dsrl        $a2, $a2, 16
    ctx->pc = 0x3160e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x3160e4: 0x9383c  dsll32      $a3, $t1, 0
    ctx->pc = 0x3160e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) << (32 + 0));
    // 0x3160e8: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x3160e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x3160ec: 0x2461025  or          $v0, $s2, $a2
    ctx->pc = 0x3160ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | GPR_U64(ctx, 6));
    // 0x3160f0: 0x24040088  addiu       $a0, $zero, 0x88
    ctx->pc = 0x3160f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x3160f4: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x3160f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x3160f8: 0x1a41825  or          $v1, $t5, $a0
    ctx->pc = 0x3160f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) | GPR_U64(ctx, 4));
    // 0x3160fc: 0x2272025  or          $a0, $s1, $a3
    ctx->pc = 0x3160fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x316100: 0xfd430000  sd          $v1, 0x0($t2)
    ctx->pc = 0x316100u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 3));
    // 0x316104: 0x2261825  or          $v1, $s1, $a2
    ctx->pc = 0x316104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
    // 0x316108: 0xfd420008  sd          $v0, 0x8($t2)
    ctx->pc = 0x316108u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 2));
    // 0x31610c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31610cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316110: 0x19e1025  or          $v0, $t4, $fp
    ctx->pc = 0x316110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 30));
    // 0x316114: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x316114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x316118: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316118u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x31611c: 0x1b91025  or          $v0, $t5, $t9
    ctx->pc = 0x31611cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 25));
    // 0x316120: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x316120u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x316124: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316124u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316128: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x316128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x31612c: 0x2072025  or          $a0, $s0, $a3
    ctx->pc = 0x31612cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
    // 0x316130: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316130u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316134: 0x1981025  or          $v0, $t4, $t8
    ctx->pc = 0x316134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 24));
    // 0x316138: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x316138u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x31613c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31613cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316140: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x316140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
    // 0x316144: 0x2062825  or          $a1, $s0, $a2
    ctx->pc = 0x316144u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x316148: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316148u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x31614c: 0x1b71025  or          $v0, $t5, $s7
    ctx->pc = 0x31614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 23));
    // 0x316150: 0xfd440008  sd          $a0, 0x8($t2)
    ctx->pc = 0x316150u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 4));
    // 0x316154: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316154u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316158: 0x1e71825  or          $v1, $t7, $a3
    ctx->pc = 0x316158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) | GPR_U64(ctx, 7));
    // 0x31615c: 0x1073825  or          $a3, $t0, $a3
    ctx->pc = 0x31615cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) | GPR_U64(ctx, 7));
    // 0x316160: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x316160u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x316164: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316164u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316168: 0xfd450008  sd          $a1, 0x8($t2)
    ctx->pc = 0x316168u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 5));
    // 0x31616c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31616cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316170: 0x1961025  or          $v0, $t4, $s6
    ctx->pc = 0x316170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 22));
    // 0x316174: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x316174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x316178: 0x1e63025  or          $a2, $t7, $a2
    ctx->pc = 0x316178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) | GPR_U64(ctx, 6));
    // 0x31617c: 0xfd430008  sd          $v1, 0x8($t2)
    ctx->pc = 0x31617cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 3));
    // 0x316180: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316180u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316184: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x316184u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x316188: 0x1b51025  or          $v0, $t5, $s5
    ctx->pc = 0x316188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 21));
    // 0x31618c: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x31618cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x316190: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x316190u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x316194: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x316194u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x316198: 0xfd460008  sd          $a2, 0x8($t2)
    ctx->pc = 0x316198u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 6));
    // 0x31619c: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x31619cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3161a0: 0x1941025  or          $v0, $t4, $s4
    ctx->pc = 0x3161a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 20));
    // 0x3161a4: 0x3c030080  lui         $v1, 0x80
    ctx->pc = 0x3161a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
    // 0x3161a8: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x3161a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x3161ac: 0x2e640020  sltiu       $a0, $s3, 0x20
    ctx->pc = 0x3161acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x3161b0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x3161b0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x3161b4: 0x1a3682d  daddu       $t5, $t5, $v1
    ctx->pc = 0x3161b4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3161b8: 0xfd470008  sd          $a3, 0x8($t2)
    ctx->pc = 0x3161b8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 8), GPR_U64(ctx, 7));
    // 0x3161bc: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x3161bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x3161c0: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x3161c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x3161c4: 0x1480ffc4  bnez        $a0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x3161C4u;
    {
        const bool branch_taken_0x3161c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3161C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161C4u;
        // 0x3161c8: 0x183602d  daddu       $t4, $t4, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161c4) {
            ctx->pc = 0x3160D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3160d8;
        }
    }
    ctx->pc = 0x3161CCu;
    // 0x3161cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3161ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3161d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3161d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3161d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3161d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3161d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3161d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3161dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3161dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3161e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3161e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3161e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x3161e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3161e8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x3161e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3161ec: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x3161ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3161f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3161F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3161F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161F0u;
        // 0x3161f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3161F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3161F8u;
}
