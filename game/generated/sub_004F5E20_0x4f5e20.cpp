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

// Function: sub_004F5E20
// Address: 0x4f5e20 - 0x4f61c8
void sub_004F5E20_0x4f5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F5E20_0x4f5e20");
#endif

    switch (ctx->pc) {
        case 0x4f5ed8u: goto label_4f5ed8;
        case 0x4f5f90u: goto label_4f5f90;
        case 0x4f5fa8u: goto label_4f5fa8;
        case 0x4f5fccu: goto label_4f5fcc;
        case 0x4f5fd4u: goto label_4f5fd4;
        case 0x4f6060u: goto label_4f6060;
        case 0x4f6068u: goto label_4f6068;
        case 0x4f60fcu: goto label_4f60fc;
        case 0x4f6104u: goto label_4f6104;
        case 0x4f619cu: goto label_4f619c;
        default: break;
    }

    ctx->pc = 0x4f5e20u;

    // 0x4f5e20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f5e24: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4f5e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5e28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5e2c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x4f5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x4f5e30: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x4f5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x4f5e34: 0x94c501b6  lhu         $a1, 0x1B6($a2)
    ctx->pc = 0x4f5e34u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 438)));
    // 0x4f5e38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5e3c: 0xa4452332  sh          $a1, 0x2332($v0)
    ctx->pc = 0x4f5e3cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B2u, _value); } while (0);
    // 0x4f5e40: 0x94c30012  lhu         $v1, 0x12($a2)
    ctx->pc = 0x4f5e40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 18)));
    // 0x4f5e44: 0xa4432334  sh          $v1, 0x2334($v0)
    ctx->pc = 0x4f5e44u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4f5e48: 0x94c50016  lhu         $a1, 0x16($a2)
    ctx->pc = 0x4f5e48u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x4f5e4c: 0xa4452336  sh          $a1, 0x2336($v0)
    ctx->pc = 0x4f5e4cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4f5e50: 0x94c3001a  lhu         $v1, 0x1A($a2)
    ctx->pc = 0x4f5e50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x4f5e54: 0xac402348  sw          $zero, 0x2348($v0)
    ctx->pc = 0x4f5e54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C8u, _value); } while (0);
    // 0x4f5e58: 0xa4432338  sh          $v1, 0x2338($v0)
    ctx->pc = 0x4f5e58u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x4f5e5c: 0xac402340  sw          $zero, 0x2340($v0)
    ctx->pc = 0x4f5e5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C0u, _value); } while (0);
    // 0x4f5e60: 0xac402344  sw          $zero, 0x2344($v0)
    ctx->pc = 0x4f5e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F9C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F9C4u, _value); } while (0);
    // 0x4f5e64: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4F5E64u;
    ctx->pc = 0x4F5E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5E64u;
    // 0x4f5e68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4F5E6Cu;
    // 0x4f5e6c: 0x0  nop
    ctx->pc = 0x4f5e6cu;
    // NOP
    // 0x4f5e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f5e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f5e74: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x4f5e74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f5e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4f5e7c: 0x3c060073  lui         $a2, 0x73
    ctx->pc = 0x4f5e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)115 << 16));
    // 0x4f5e80: 0x24c6d680  addiu       $a2, $a2, -0x2980
    ctx->pc = 0x4f5e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
    // 0x4f5e84: 0x94e301b6  lhu         $v1, 0x1B6($a3)
    ctx->pc = 0x4f5e84u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 438)));
    // 0x4f5e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f5e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5e8c: 0xa4c32332  sh          $v1, 0x2332($a2)
    ctx->pc = 0x4f5e8cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B2u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B2u, _value); } while (0);
    // 0x4f5e90: 0x94e20012  lhu         $v0, 0x12($a3)
    ctx->pc = 0x4f5e90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 18)));
    // 0x4f5e94: 0xa4c22334  sh          $v0, 0x2334($a2)
    ctx->pc = 0x4f5e94u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x72F9B4u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B4u, _value); } while (0);
    // 0x4f5e98: 0x94e30016  lhu         $v1, 0x16($a3)
    ctx->pc = 0x4f5e98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
    // 0x4f5e9c: 0xa4c32336  sh          $v1, 0x2336($a2)
    ctx->pc = 0x4f5e9cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F9B6u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B6u, _value); } while (0);
    // 0x4f5ea0: 0x94e5001a  lhu         $a1, 0x1A($a3)
    ctx->pc = 0x4f5ea0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x4f5ea4: 0xa4c52338  sh          $a1, 0x2338($a2)
    ctx->pc = 0x4f5ea4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F9B8u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F9B8u, _value); } while (0);
    // 0x4f5ea8: 0x8ce20124  lw          $v0, 0x124($a3)
    ctx->pc = 0x4f5ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 292)));
    // 0x4f5eac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4f5eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4f5eb0: 0xacc22340  sw          $v0, 0x2340($a2)
    ctx->pc = 0x4f5eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9024), GPR_U32(ctx, 2));
    // 0x4f5eb4: 0x8ce30128  lw          $v1, 0x128($a3)
    ctx->pc = 0x4f5eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 296)));
    // 0x4f5eb8: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4f5eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x4f5ebc: 0xacc32344  sw          $v1, 0x2344($a2)
    ctx->pc = 0x4f5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9028), GPR_U32(ctx, 3));
    // 0x4f5ec0: 0x8ce2012c  lw          $v0, 0x12C($a3)
    ctx->pc = 0x4f5ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 300)));
    // 0x4f5ec4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x4f5ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x4f5ec8: 0xacc22348  sw          $v0, 0x2348($a2)
    ctx->pc = 0x4f5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 9032), GPR_U32(ctx, 2));
    // 0x4f5ecc: 0x813d6c2  j           func_4F5B08
    ctx->pc = 0x4F5ECCu;
    ctx->pc = 0x4F5ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5ECCu;
    // 0x4f5ed0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B08u;
    sub_004F5B08_0x4f5b08(rdram, ctx, runtime); return;
    ctx->pc = 0x4F5ED4u;
    // 0x4f5ed4: 0x0  nop
    ctx->pc = 0x4f5ed4u;
    // NOP
label_4f5ed8:
    // 0x4f5ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4f5ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x4f5edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f5edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f5ee0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4f5ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5ee4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x4f5ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x4f5ee8: 0x2605015e  addiu       $a1, $s0, 0x15E
    ctx->pc = 0x4f5ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 350));
    // 0x4f5eec: 0x26070160  addiu       $a3, $s0, 0x160
    ctx->pc = 0x4f5eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x4f5ef0: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4f5ef0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f5ef4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4F5EF4u;
    {
        const bool branch_taken_0x4f5ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5EF4u;
        // 0x4f5ef8: 0x26060164  addiu       $a2, $s0, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5ef4) {
            ctx->pc = 0x4F5F34u;
            goto label_4f5f34;
        }
    }
    ctx->pc = 0x4F5EFCu;
    // 0x4f5efc: 0x94e20000  lhu         $v0, 0x0($a3)
    ctx->pc = 0x4f5efcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x4f5f00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f5f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f5f04: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x4f5f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f5f08: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4F5F08u;
    {
        const bool branch_taken_0x4f5f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F08u;
        // 0x4f5f0c: 0xa4e20000  sh          $v0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f08) {
            ctx->pc = 0x4F5F20u;
            goto label_4f5f20;
        }
    }
    ctx->pc = 0x4F5F10u;
    // 0x4f5f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f5f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5f14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f5f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5f18: 0x812b62c  j           func_4AD8B0
    ctx->pc = 0x4F5F18u;
    ctx->pc = 0x4F5F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5F18u;
    // 0x4f5f1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD8B0u;
    sub_004AD8B0_0x4ad8b0(rdram, ctx, runtime); return;
    ctx->pc = 0x4F5F20u;
label_4f5f20:
    // 0x4f5f20: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x4f5f20u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f5f24: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f5f28: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4f5f28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5f2c: 0x96030162  lhu         $v1, 0x162($s0)
    ctx->pc = 0x4f5f2cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x4f5f30: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x4f5f30u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_4f5f34:
    // 0x4f5f34: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4f5f34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4f5f38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4f5f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4f5f3c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x4f5f3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f5f40: 0x960501be  lhu         $a1, 0x1BE($s0)
    ctx->pc = 0x4f5f40u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 446)));
    // 0x4f5f44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x4f5f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x4f5f48: 0x3045fffc  andi        $a1, $v0, 0xFFFC
    ctx->pc = 0x4f5f48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65532);
    // 0x4f5f4c: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x4f5f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f5f50: 0x94c50000  lhu         $a1, 0x0($a2)
    ctx->pc = 0x4f5f50u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4f5f54: 0x31bc3  sra         $v1, $v1, 15
    ctx->pc = 0x4f5f54u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 15));
    // 0x4f5f58: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x4f5f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f5f5c: 0x960501b6  lhu         $a1, 0x1B6($s0)
    ctx->pc = 0x4f5f5cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 438)));
    // 0x4f5f60: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4f5f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x4f5f64: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x4f5f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x4f5f68: 0x8c8483d8  lw          $a0, -0x7C28($a0)
    ctx->pc = 0x4f5f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294935512)));
    // 0x4f5f6c: 0x21443  sra         $v0, $v0, 17
    ctx->pc = 0x4f5f6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 17));
    // 0x4f5f70: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4f5f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4f5f74: 0x30a50006  andi        $a1, $a1, 0x6
    ctx->pc = 0x4f5f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x4f5f78: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4f5f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4f5f7c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x4f5f7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4f5f80: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4F5F80u;
    {
        const bool branch_taken_0x4f5f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F5F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F5F80u;
        // 0x4f5f84: 0xa603000c  sh          $v1, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f5f80) {
            ctx->pc = 0x4F5F90u;
            goto label_4f5f90;
        }
    }
    ctx->pc = 0x4F5F88u;
    // 0x4f5f88: 0xc12b6bc  jal         func_4ADAF0
    ctx->pc = 0x4F5F88u;
    SET_GPR_U32(ctx, 31, 0x4F5F90u);
    ctx->pc = 0x4F5F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5F88u;
    // 0x4f5f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADAF0u, 0x4F5F88u, 0x4F5F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5F90u;
label_4f5f90:
    // 0x4f5f90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4f5f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f5f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f5f98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x4f5f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f5f9c: 0x812b9d0  j           func_4AE740
    ctx->pc = 0x4F5F9Cu;
    ctx->pc = 0x4F5FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5F9Cu;
    // 0x4f5fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AE740u;
    sub_004AE740_0x4ae740(rdram, ctx, runtime); return;
    ctx->pc = 0x4F5FA4u;
    // 0x4f5fa4: 0x0  nop
    ctx->pc = 0x4f5fa4u;
    // NOP
label_4f5fa8:
    // 0x4f5fa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4f5fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4f5fac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4f5facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4f5fb0: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4f5fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4f5fb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4f5fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4f5fb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4f5fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5fbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4f5fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4f5fc0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x4f5fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x4f5fc4: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F5FC4u;
    SET_GPR_U32(ctx, 31, 0x4F5FCCu);
    ctx->pc = 0x4F5FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5FC4u;
    // 0x4f5fc8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F5FC4u, 0x4F5FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5FCCu;
label_4f5fcc:
    // 0x4f5fcc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F5FCCu;
    SET_GPR_U32(ctx, 31, 0x4F5FD4u);
    ctx->pc = 0x4F5FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F5FCCu;
    // 0x4f5fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F5FCCu, 0x4F5FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F5FD4u;
label_4f5fd4:
    // 0x4f5fd4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x4f5fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4f5fd8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4f5fd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f5fdc: 0x26280124  addiu       $t0, $s1, 0x124
    ctx->pc = 0x4f5fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    // 0x4f5fe0: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x4f5fe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x4f5fe4: 0x31438000  andi        $v1, $t2, 0x8000
    ctx->pc = 0x4f5fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32768);
    // 0x4f5fe8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f5fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f5fec: 0x3544ffff  ori         $a0, $t2, 0xFFFF
    ctx->pc = 0x4f5fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f5ff0: 0xa3900b  movn        $s2, $a1, $v1
    ctx->pc = 0x4f5ff0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
    // 0x4f5ff4: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f5ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f5ff8: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x4f5ff8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f5ffc: 0x123400  sll         $a2, $s2, 16
    ctx->pc = 0x4f5ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6000: 0x1521026  xor         $v0, $t2, $s2
    ctx->pc = 0x4f6000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 18));
    // 0x4f6004: 0x3544ffff  ori         $a0, $t2, 0xFFFF
    ctx->pc = 0x4f6004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f6008: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f600c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f600cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f6010: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6010u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6014: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6018: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x4f6018u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f601c: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f601cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f6020: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x4f6020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4f6024: 0x3547ffff  ori         $a3, $t2, 0xFFFF
    ctx->pc = 0x4f6024u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f6028: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6028u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f602c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f602cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f6030: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f6030u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f6034: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f6034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f6038: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f6038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f603c: 0xe35024  and         $t2, $a3, $v1
    ctx->pc = 0x4f603cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f6040: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x4f6040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4f6044: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6048: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f6048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f604c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f604cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f6050: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f6050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f6054: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f6054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f6058: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F6058u;
    SET_GPR_U32(ctx, 31, 0x4F6060u);
    ctx->pc = 0x4F605Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6058u;
    // 0x4f605c: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F6058u, 0x4F6060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6060u;
label_4f6060:
    // 0x4f6060: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F6060u;
    SET_GPR_U32(ctx, 31, 0x4F6068u);
    ctx->pc = 0x4F6064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6060u;
    // 0x4f6064: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F6060u, 0x4F6068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6068u;
label_4f6068:
    // 0x4f6068: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f6068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f606c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4f606cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6070: 0x2502824  and         $a1, $s2, $s0
    ctx->pc = 0x4f6070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f6074: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x4f6074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x4f6078: 0x31438000  andi        $v1, $t2, 0x8000
    ctx->pc = 0x4f6078u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32768);
    // 0x4f607c: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f607cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f6080: 0x3544ffff  ori         $a0, $t2, 0xFFFF
    ctx->pc = 0x4f6080u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f6084: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4f6084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6088: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x4f6088u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f608c: 0xa3900a  movz        $s2, $a1, $v1
    ctx->pc = 0x4f608cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
    // 0x4f6090: 0x3544ffff  ori         $a0, $t2, 0xFFFF
    ctx->pc = 0x4f6090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f6094: 0x1521026  xor         $v0, $t2, $s2
    ctx->pc = 0x4f6094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 18));
    // 0x4f6098: 0x123400  sll         $a2, $s2, 16
    ctx->pc = 0x4f6098u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f609c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f609cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f60a0: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x4f60a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x4f60a4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f60a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f60a8: 0x26280128  addiu       $t0, $s1, 0x128
    ctx->pc = 0x4f60a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 296));
    // 0x4f60ac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f60acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f60b0: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x4f60b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x4f60b4: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x4f60b4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f60b8: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x4f60b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4f60bc: 0x3547ffff  ori         $a3, $t2, 0xFFFF
    ctx->pc = 0x4f60bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f60c0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f60c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f60c4: 0xb02024  and         $a0, $a1, $s0
    ctx->pc = 0x4f60c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 16));
    // 0x4f60c8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x4f60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x4f60cc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x4f60ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x4f60d0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f60d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f60d4: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x4f60d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
    // 0x4f60d8: 0xe35024  and         $t2, $a3, $v1
    ctx->pc = 0x4f60d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x4f60dc: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x4f60dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4f60e0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f60e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f60e4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x4f60e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4f60e8: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x4f60e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x4f60ec: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x4f60ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x4f60f0: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x4f60f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x4f60f4: 0xc12b5b0  jal         func_4AD6C0
    ctx->pc = 0x4F60F4u;
    SET_GPR_U32(ctx, 31, 0x4F60FCu);
    ctx->pc = 0x4F60F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F60F4u;
    // 0x4f60f8: 0xad050000  sw          $a1, 0x0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AD6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD6C0u, 0x4F60F4u, 0x4F60FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F60FCu;
label_4f60fc:
    // 0x4f60fc: 0xc12a198  jal         func_4A8660
    ctx->pc = 0x4F60FCu;
    SET_GPR_U32(ctx, 31, 0x4F6104u);
    ctx->pc = 0x4F6100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F60FCu;
    // 0x4f6100: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8660u, 0x4F60FCu, 0x4F6104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F6104u;
label_4f6104:
    // 0x4f6104: 0x3646ffff  ori         $a2, $s2, 0xFFFF
    ctx->pc = 0x4f6104u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x4f6108: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4f6108u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f610c: 0x2502824  and         $a1, $s2, $s0
    ctx->pc = 0x4f610cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 16));
    // 0x4f6110: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x4f6110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x4f6114: 0x31438000  andi        $v1, $t2, 0x8000
    ctx->pc = 0x4f6114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32768);
    // 0x4f6118: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f611c: 0x3544ffff  ori         $a0, $t2, 0xFFFF
    ctx->pc = 0x4f611cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f6120: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4f6120u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6124: 0x825024  and         $t2, $a0, $v0
    ctx->pc = 0x4f6124u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x4f6128: 0xa3900a  movz        $s2, $a1, $v1
    ctx->pc = 0x4f6128u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 5));
    // 0x4f612c: 0x3543ffff  ori         $v1, $t2, 0xFFFF
    ctx->pc = 0x4f612cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f6130: 0x1521026  xor         $v0, $t2, $s2
    ctx->pc = 0x4f6130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 18));
    // 0x4f6134: 0x123c00  sll         $a3, $s2, 16
    ctx->pc = 0x4f6134u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 18), 16));
    // 0x4f6138: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x4f6138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x4f613c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x4f613cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x4f6140: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6140u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6144: 0x2629012c  addiu       $t1, $s1, 0x12C
    ctx->pc = 0x4f6144u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 300));
    // 0x4f6148: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x4f6148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x4f614c: 0x8d260000  lw          $a2, 0x0($t1)
    ctx->pc = 0x4f614cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4f6150: 0x625024  and         $t2, $v1, $v0
    ctx->pc = 0x4f6150u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4f6154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f6154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f6158: 0xa1c00  sll         $v1, $t2, 16
    ctx->pc = 0x4f6158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4f615c: 0x3548ffff  ori         $t0, $t2, 0xFFFF
    ctx->pc = 0x4f615cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4f6160: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x4f6160u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x4f6164: 0xd02824  and         $a1, $a2, $s0
    ctx->pc = 0x4f6164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 16));
    // 0x4f6168: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x4f6168u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4f616c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x4f616cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x4f6170: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x4f6170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x4f6174: 0xd03025  or          $a2, $a2, $s0
    ctx->pc = 0x4f6174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 16));
    // 0x4f6178: 0x1035024  and         $t2, $t0, $v1
    ctx->pc = 0x4f6178u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 8) & GPR_U64(ctx, 3));
    // 0x4f617c: 0xa1400  sll         $v0, $t2, 16
    ctx->pc = 0x4f617cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x4f6180: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x4f6180u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x4f6184: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x4f6184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4f6188: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x4f6188u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x4f618c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x4f618cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x4f6190: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x4f6190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x4f6194: 0xc12b6a4  jal         func_4ADA90
    ctx->pc = 0x4F6194u;
    SET_GPR_U32(ctx, 31, 0x4F619Cu);
    ctx->pc = 0x4F6198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F6194u;
    // 0x4f6198: 0xad260000  sw          $a2, 0x0($t1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ADA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ADA90u, 0x4F6194u, 0x4F619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F619Cu;
label_4f619c:
    // 0x4f619c: 0x262301bc  addiu       $v1, $s1, 0x1BC
    ctx->pc = 0x4f619cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x4f61a0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x4f61a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4f61a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4f61a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4f61a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4f61a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4f61ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4f61acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4f61b0: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x4f61b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x4f61b4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4f61b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4f61b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x4f61b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4f61bc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x4f61bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4f61c0: 0x813d7b6  j           func_4F5ED8
    ctx->pc = 0x4F61C0u;
    ctx->pc = 0x4F61C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F61C0u;
    // 0x4f61c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F5ED8u;
    if (runtime->eeCheckpointDue()) {
        return;
    }
    goto label_4f5ed8;
    ctx->pc = 0x4F61C8u;
}
