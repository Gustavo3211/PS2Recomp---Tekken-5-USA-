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

// Function: sub_0049E500
// Address: 0x49e500 - 0x49e660
void sub_0049E500_0x49e500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E500_0x49e500");
#endif

    switch (ctx->pc) {
        case 0x49e528u: goto label_49e528;
        case 0x49e544u: goto label_49e544;
        case 0x49e578u: goto label_49e578;
        case 0x49e5dcu: goto label_49e5dc;
        case 0x49e608u: goto label_49e608;
        case 0x49e654u: goto label_49e654;
        default: break;
    }

    ctx->pc = 0x49e500u;

    // 0x49e500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49e500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49e504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x49e504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x49e508: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x49e508u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
    // 0x49e50c: 0x2610d680  addiu       $s0, $s0, -0x2980
    ctx->pc = 0x49e50cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956672));
    // 0x49e510: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x49e510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x49e514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49e514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49e518: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x49e518u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49e51c: 0xa600007a  sh          $zero, 0x7A($s0)
    ctx->pc = 0x49e51cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D6FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6FAu, _value); } while (0);
    // 0x49e520: 0xc122d1c  jal         func_48B470
    ctx->pc = 0x49E520u;
    SET_GPR_U32(ctx, 31, 0x49E528u);
    ctx->pc = 0x49E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E520u;
    // 0x49e524: 0xa600007e  sh          $zero, 0x7E($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B470u, 0x49E520u, 0x49E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E528u;
label_49e528:
    // 0x49e528: 0x24027f00  addiu       $v0, $zero, 0x7F00
    ctx->pc = 0x49e528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x49e52c: 0xa60021fc  sh          $zero, 0x21FC($s0)
    ctx->pc = 0x49e52cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8700), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e530: 0xa6022214  sh          $v0, 0x2214($s0)
    ctx->pc = 0x49e530u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8724), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e534: 0xae0021f4  sw          $zero, 0x21F4($s0)
    ctx->pc = 0x49e534u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8692), GPR_U32(ctx, 0));
    // 0x49e538: 0xae0021f8  sw          $zero, 0x21F8($s0)
    ctx->pc = 0x49e538u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8696), GPR_U32(ctx, 0));
    // 0x49e53c: 0xc1232f6  jal         func_48CBD8
    ctx->pc = 0x49E53Cu;
    SET_GPR_U32(ctx, 31, 0x49E544u);
    ctx->pc = 0x49E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E53Cu;
    // 0x49e540: 0xa60021fe  sh          $zero, 0x21FE($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8702), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBD8u, 0x49E53Cu, 0x49E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E544u;
label_49e544:
    // 0x49e544: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49e544u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e548: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49e548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49e54c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49e54cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e550: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49e550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49e554: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49e554u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e558: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x49e558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x49e55c: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x49e55cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e560: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x49e560u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e564: 0xae112260  sw          $s1, 0x2260($s0)
    ctx->pc = 0x49e564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8800), GPR_U32(ctx, 17));
    // 0x49e568: 0xa6002218  sh          $zero, 0x2218($s0)
    ctx->pc = 0x49e568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8728), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e56c: 0xa600221a  sh          $zero, 0x221A($s0)
    ctx->pc = 0x49e56cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8730), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e570: 0xc1232f2  jal         func_48CBC8
    ctx->pc = 0x49E570u;
    SET_GPR_U32(ctx, 31, 0x49E578u);
    ctx->pc = 0x49E574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E570u;
    // 0x49e574: 0xa600221c  sh          $zero, 0x221C($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8732), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CBC8u, 0x49E570u, 0x49E578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E578u;
label_49e578:
    // 0x49e578: 0x24037fff  addiu       $v1, $zero, 0x7FFF
    ctx->pc = 0x49e578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x49e57c: 0xa4430066  sh          $v1, 0x66($v0)
    ctx->pc = 0x49e57cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e580: 0x240400fe  addiu       $a0, $zero, 0xFE
    ctx->pc = 0x49e580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x49e584: 0xa4430062  sh          $v1, 0x62($v0)
    ctx->pc = 0x49e584u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e588: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49e588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49e58c: 0xa4400060  sh          $zero, 0x60($v0)
    ctx->pc = 0x49e58cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 96), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e590: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x49e590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x49e594: 0xa4400064  sh          $zero, 0x64($v0)
    ctx->pc = 0x49e594u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e598: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x49e598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x49e59c: 0xa604007c  sh          $a0, 0x7C($s0)
    ctx->pc = 0x49e59cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e5a0: 0xa6112292  sh          $s1, 0x2292($s0)
    ctx->pc = 0x49e5a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8850), (uint16_t)GPR_U32(ctx, 17));
    // 0x49e5a4: 0xa6052424  sh          $a1, 0x2424($s0)
    ctx->pc = 0x49e5a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9252), (uint16_t)GPR_U32(ctx, 5));
    // 0x49e5a8: 0xa60322ca  sh          $v1, 0x22CA($s0)
    ctx->pc = 0x49e5a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8906), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e5ac: 0xa6022314  sh          $v0, 0x2314($s0)
    ctx->pc = 0x49e5acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8980), (uint16_t)GPR_U32(ctx, 2));
    // 0x49e5b0: 0xa6002378  sh          $zero, 0x2378($s0)
    ctx->pc = 0x49e5b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9080), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5b4: 0xa600232a  sh          $zero, 0x232A($s0)
    ctx->pc = 0x49e5b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9002), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5b8: 0xa600231c  sh          $zero, 0x231C($s0)
    ctx->pc = 0x49e5b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8988), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5bc: 0xa600231e  sh          $zero, 0x231E($s0)
    ctx->pc = 0x49e5bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8990), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5c0: 0xa6002320  sh          $zero, 0x2320($s0)
    ctx->pc = 0x49e5c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8992), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5c4: 0xa6002322  sh          $zero, 0x2322($s0)
    ctx->pc = 0x49e5c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8994), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5c8: 0xa600231a  sh          $zero, 0x231A($s0)
    ctx->pc = 0x49e5c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8986), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5cc: 0xa6002426  sh          $zero, 0x2426($s0)
    ctx->pc = 0x49e5ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 9254), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5d0: 0xa6002316  sh          $zero, 0x2316($s0)
    ctx->pc = 0x49e5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8982), (uint16_t)GPR_U32(ctx, 0));
    // 0x49e5d4: 0xc12462c  jal         func_4918B0
    ctx->pc = 0x49E5D4u;
    SET_GPR_U32(ctx, 31, 0x49E5DCu);
    ctx->pc = 0x49E5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E5D4u;
    // 0x49e5d8: 0xa60000ac  sh          $zero, 0xAC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 172), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4918B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4918B0u, 0x49E5D4u, 0x49E5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E5DCu;
label_49e5dc:
    // 0x49e5dc: 0x9443008c  lhu         $v1, 0x8C($v0)
    ctx->pc = 0x49e5dcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x49e5e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x49e5e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x49e5e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x49e5e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49e5e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49e5ec: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x49e5ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x49e5f0: 0x9444008e  lhu         $a0, 0x8E($v0)
    ctx->pc = 0x49e5f0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 142)));
    // 0x49e5f4: 0xa6040036  sh          $a0, 0x36($s0)
    ctx->pc = 0x49e5f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 54), (uint16_t)GPR_U32(ctx, 4));
    // 0x49e5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x49e5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x49E5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49E5FCu;
        // 0x49e600: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49E5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49E604u;
    // 0x49e604: 0x0  nop
    ctx->pc = 0x49e604u;
    // NOP
label_49e608:
    // 0x49e608: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x49e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x49e60c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49e60cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49e610: 0x2442d680  addiu       $v0, $v0, -0x2980
    ctx->pc = 0x49e610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956672));
    // 0x49e614: 0x240600fe  addiu       $a2, $zero, 0xFE
    ctx->pc = 0x49e614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x49e618: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x49e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x49e61c: 0x24057f00  addiu       $a1, $zero, 0x7F00
    ctx->pc = 0x49e61cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32512));
    // 0x49e620: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x49e620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x49e624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x49e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x49e628: 0xac432260  sw          $v1, 0x2260($v0)
    ctx->pc = 0x49e628u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x72F8E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72F8E0u, _value); } while (0);
    // 0x49e62c: 0xa446007c  sh          $a2, 0x7C($v0)
    ctx->pc = 0x49e62cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x72D6FCu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6FCu, _value); } while (0);
    // 0x49e630: 0xa444220a  sh          $a0, 0x220A($v0)
    ctx->pc = 0x49e630u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x72F88Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F88Au, _value); } while (0);
    // 0x49e634: 0xa4452214  sh          $a1, 0x2214($v0)
    ctx->pc = 0x49e634u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x72F894u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F894u, _value); } while (0);
    // 0x49e638: 0xa440007a  sh          $zero, 0x7A($v0)
    ctx->pc = 0x49e638u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72D6FAu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72D6FAu, _value); } while (0);
    // 0x49e63c: 0xa44021fc  sh          $zero, 0x21FC($v0)
    ctx->pc = 0x49e63cu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F87Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F87Cu, _value); } while (0);
    // 0x49e640: 0xa44021fe  sh          $zero, 0x21FE($v0)
    ctx->pc = 0x49e640u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F87Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F87Eu, _value); } while (0);
    // 0x49e644: 0xa4402218  sh          $zero, 0x2218($v0)
    ctx->pc = 0x49e644u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F898u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F898u, _value); } while (0);
    // 0x49e648: 0xa440221a  sh          $zero, 0x221A($v0)
    ctx->pc = 0x49e648u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x72F89Au, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x72F89Au, _value); } while (0);
    // 0x49e64c: 0xc1242ec  jal         func_490BB0
    ctx->pc = 0x49E64Cu;
    SET_GPR_U32(ctx, 31, 0x49E654u);
    ctx->pc = 0x49E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E64Cu;
    // 0x49e650: 0xa440221c  sh          $zero, 0x221C($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 8732), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x490BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490BB0u, 0x49E64Cu, 0x49E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49E654u;
label_49e654:
    // 0x49e654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x49e654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49e658: 0x8122c4c  j           func_48B130
    ctx->pc = 0x49E658u;
    ctx->pc = 0x49E65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49E658u;
    // 0x49e65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B130u, 0x49E658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x49E660u;
}
